```cpp
#include <initializer_list>
#include <vector>
#include <cassert>
#include <iostream>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    if (arr.empty()) return result;

    size_t minEven = SIZE_MAX;
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }

    result.push_back((int)minEven);
    result.push_back(minIndex);

    return result;

}

int mainFunction() {
    std::vector<int> input = {7, 9, 7, 1};
    std::vector<int> output = pluck(input);
    assert(issame(output, {}));
    std::cout << "Output: ";
    for (int i : output) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}