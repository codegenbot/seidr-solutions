```cpp
#include <vector>
#include <string>
#include <initializer_list>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
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

vector<string> all_prefixes(const string& s) {
    vector<string> result;
    for (int i = 0; i <= s.size(); i++) {
        result.push_back(s.substr(0, i));
    }
    return result;
}

int main() {
    vector<string> b = {"W", "W", "W"};
    assert(issame(all_prefixes("WWW"), b));
}