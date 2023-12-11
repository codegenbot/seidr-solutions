```
#include <iostream>
#include <vector>

bool issame(std::vector<int> a) {
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

int main() {
    std::vector<int> common;
    assert(issame({4, 3, 2, 8}) == {});
}
```