```
#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> total_match(vector<string> a, vector<string> b) {
    vector<string> result;
    for (int i = 0; i < a.size(); i++) {
        if (issame(a[i], b[i])) {
            result.push_back(a[i]);
        }
    }
    return result;
}

int main() {
    vector<string> a = {"this", "is", "a", "test"};
    vector<string> b = {"this", "is", "a", "test"};
    assert(issame(total_match(a, b), a));
    return 0;
}
```