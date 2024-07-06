```c++
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> array) {
    int sum = 0;
    for (int num : array)
        sum += num;

    if (sum % 2 == 1)
        return array;
    else
        std::sort(array.rbegin(), array.rend());
    return array;
}