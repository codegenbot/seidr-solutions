```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

std::vector<int> pluck(const std::vector<int>& arr) {
    std::vector<int> result;
    if (arr.empty()) return result;

    int minEven = INT_MAX;
    int index = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            index = i;
        }
    }

    if (minEven != INT_MAX) {
        result.push_back(minEven);
        result.push_back(index);
    }

    return result;
}

int main() {
    std::vector<int> input = {1, 2, 3, 4};
    std::vector<int> output = pluck(input);

    if (!issame({4}, output)) {
        for (auto i : output) {
            std::cout << i << " ";
        }
        std::cout << "\n";
    } else {
        std::cout << "Output is same as expected.\n";
    }

    return 0;
}