```cpp
#include <iostream>
#include <vector>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

std::vector<int> strange_sort_list(std::vector<int> vec) {
    // You can implement your own sorting algorithm or use the existing one
    std::sort(vec.begin(), vec.end());
    return vec;
}

int main() {
    std::vector<int> input = {111111};
    assert(std::issame(strange_sort_list(input), input));
    return 0;
}