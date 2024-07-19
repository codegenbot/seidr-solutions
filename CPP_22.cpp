#include <vector>
#include <cassert>
#include <cctype>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> filter_integers(const std::vector<int>& input) {
    std::vector<int> result;
    for (int num : input) {
        if (std::isdigit(static_cast<char>(num))) {
            result.push_back(num);
        }
    }
    return result;
}