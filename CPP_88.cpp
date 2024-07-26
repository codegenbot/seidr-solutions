#include <vector>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> array) {
    if(array.empty()) return array;
    if(issame(array.front(), array.back()) || (array.front() + array.back()) % 2 == 0)
        sort(array.begin(), array.end(), std::greater<int>());
    else
        sort(array.begin(), array.end());
    return array;
}