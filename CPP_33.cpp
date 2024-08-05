#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_third(const std::vector<int>& vec) {
    std::vector<int> result = vec;
    std::sort(result.begin() + 2, result.end());
    return result;
}

/**************************************************************************
 * Do NOT include the main function here. (remove the main function)
 **************************************************************************/