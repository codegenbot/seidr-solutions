#include <algorithm>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> removeDuplicates(std::vector<int>& l) {
    std::vector<int> result;
    std::sort(l.begin(), l.end());
    for (auto it = l.begin(); it != l.end(); ++it) {
        if (it == l.begin() || *it != *(it - 1)) {
            result.push_back(*it);
        }
    }
    return result;
}