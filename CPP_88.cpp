#include <vector>
#include <algorithm>

std::vector<int> sort_array(std::vector<int> array) {
    if(array.empty()) return array;
    if((array.front() + array.back()) % 2 == 0)
        std::sort(array.rbegin(), array.rend());
    else
        std::sort(array.begin(), array.end());
    return array;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return sort_array(a) == sort_array(b);
}