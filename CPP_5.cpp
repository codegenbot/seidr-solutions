#include <vector>
#include <cassert>

std::vector<int> intersperse(std::vector<int> vec, int elem) {
    std::vector<int> result;
    for (int i = 0; i < vec.size(); ++i) {
        result.push_back(vec[i]);
        result.push_back(elem);
    }
    return result;
}

namespace std {
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
}