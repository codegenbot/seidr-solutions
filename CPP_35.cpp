#include <algorithm>
#include <vector>

int findMax(std::vector<int> v) {
    return *std::max_element(v.begin(), v.end());
}