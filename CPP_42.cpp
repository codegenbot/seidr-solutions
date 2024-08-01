#include <vector>

std::vector<int> incr_list(const std::vector<int>& vec) {
    std::vector<int> result;
    for (int i : vec) {
        result.push_back(i + 1);
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}