#include <vector>
#include <cassert>

bool issame(std::vector<int>& a, std::vector<int>& b) {
    return a == b;
}

int main() {
    auto f = [](int x) {
        return std::vector<int>{1, 2, x};
    };
    
    assert(issame(f(3), {1, 2, 6}));
    
    return 0;
}