#include <algorithm>
#include <vector>

std::vector<int> issame(std::vector<int> a, int k) {
    std::sort(a.begin(), a.end(), std::greater<int>());
    std::vector<int> result(a.begin(), a.begin() + k);
    return result;
}