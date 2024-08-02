#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

std::vector<int> get_odd_collatz(int n) {
    // Implementation of get_odd_collatz function
    return {};
}

int main() {
    assert(issame(get_odd_collatz(1), {1}));
    
    return 0;
}