#include <vector>
#include <cmath>

std::vector<int> issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result;
    for (int i = 0; i < a.size(); ++i) {
        result.push_back(std::abs(a[i] - b[i]));
    }
    return result;
}