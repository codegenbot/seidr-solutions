#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
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

// Add implementation for make_a_pile function if not declared
// e.g., std::vector<int> make_a_pile(int n) { return ...; }

int main() {
    assert (issame(make_a_pile(8) , {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}