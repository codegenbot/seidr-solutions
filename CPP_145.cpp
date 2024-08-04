#include <vector>
#include <algorithm>
#include <numeric>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> tempA = a, tempB = b;
    std::sort(tempA.begin(), tempA.end());
    std::sort(tempB.begin(), tempB.end());
    return std::equal(tempA.begin(), tempA.end(), tempB.begin());
}