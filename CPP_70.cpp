```cpp
#include <iostream>
#include <vector>

bool isSame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

std::vector<int> strange_sort_list(std::vector<int> vec) {
    for (int i = 0; i < vec.size() - 1; ++i) {
        for (int j = 0; j < vec.size() - i - 1; ++j) {
            if (vec[j] > vec[j + 1]) {
                int temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
    }
    return vec;
}

int main() {
    std::vector<int> input = {111111};
    assert(isSame(strange_sort_list(input), input));
    return 0;
}