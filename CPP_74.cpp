```
#include <vector>
#include <string>

bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> total_match(const vector<string>& a, const vector<string>& b) {
    // implement the function here
}

int main() {
    assert(issame(total_match({"this"}, {}), {}));
    return 0;
}
```