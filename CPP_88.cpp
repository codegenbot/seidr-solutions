#include <vector>
#include <algorithm>

bool issame(std::std::vector<int> a, std::std::vector<int> b) {
    return a == b;
}

std::std::vector<int> sort_array(std::std::vector<int> array) {
    if (array.empty()) return array;
    if (issame({array.front()}, {array.back()}) || (array.front() + array.back()) % 2 == 0)
        std::sort(array.begin(), array.end(), std::greater<int>());
    else
        std::sort(array.begin(), array.end());
    return array;
}