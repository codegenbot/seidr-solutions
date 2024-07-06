```c++
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> array) {
    int sum = std::accumulate(array.begin(), array.end(), 0);
    if (sum % 2 == 1)
        return array;
    else
        std::reverse(array.begin(), array.end());
    return array;
}