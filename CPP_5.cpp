#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> intersperse(const std::vector<int>& v, int elem) {
    std::vector<int> interspersed;
    for (size_t i = 0; i < v.size(); ++i) {
        interspersed.push_back(v[i]);
        if (i != v.size() - 1) {
            interspersed.push_back(elem);
        }
    }
    return interspersed;
}