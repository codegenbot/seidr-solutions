#include <vector>

namespace std {
    bool issame(const std::vector<int>& a, const std::vector<int>& b) {
        return a == b;
    }
}

std::vector<int> incr_list(std::vector<int> l) {
    for (int& num : l) {
        num++;
    }
    return l;
}