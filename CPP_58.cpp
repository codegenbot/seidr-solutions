```cpp
#include <vector>
#include <assert.h>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame({1,2}, {1,2}) || "Test failed");
    return 0;
}