#include <vector>
#include <string>
#include <cassert>

std::vector<int> even_odd_count(int num) {
    std::vector<int> result(2, 0);
    std::string numStr = std::to_string(std::abs(num));
    for (char c : numStr) {
        if ((c - '0') % 2 == 0) {
            result[0]++;
        } else {
            result[1]++;
        }
    }
    return result;
}

bool issame(std::vector<int> v1, std::vector<int> v2) {
    assert(v1.size() == v2.size());
    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}