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

int main(void) {
    vector<string> a{"this", "is", "a", "test"};
    vector<string> b{"this"};
    assert(issame(total_match(a, b), {}));
    return 0;
}
```