#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    // Provided test case
    assert(issame({1, 2, 6}, {1, 2, 6}));

    // Additional test case
    assert(issame({1, 3, 5}, {1, 3, 5}));

    return 0;
}