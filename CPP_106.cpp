#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if ((a[i] + b[i]) % 2 == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(issame({1, 2, 6}, {1, 2, 6}));
    return 0;
}