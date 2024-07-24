#include <vector>
#include <cassert>

namespace std {
    struct rolling_max {
       std::vector<int> data;
       
       rolling_max(std::vector<int> v) : data(v) {}
    };
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(std::vector<int>({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}