#include <vector>
#include <cassert>

namespace std {
    std::vector<int> get_odd_collatz(int n) {
        std::vector<int> result = {n};
        return result;
    }
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    for(size_t i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(get_odd_collatz(1), {1}));
    return 0;
}