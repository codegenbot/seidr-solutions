#include <vector>
#include <iostream>
#include <algorithm>

bool issame(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    if (arr1.size() != arr2.size()) {
        return false;
    }
    for (int i = 0; i < arr1.size(); i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    std::vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}

int main() {
    std::vector<int> arr = {5, 2, 9, 1, 3};
    int k = 3;

    std::vector<int> result = maximum(arr, k);

    std::cout << "Maximum " << k << " elements: ";
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    std::vector<int> expected = {9, 5, 3};
    if (issame(result, expected)) {
        std::cout << "Output is correct." << std::endl;
    } else {
        std::cout << "Output is incorrect." << std::endl;
    }

    return 0;
}