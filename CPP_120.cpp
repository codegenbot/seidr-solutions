#include <vector>
#include <algorithm>
#include <iostream>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    std::vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}

bool issame(std::vector<int> arr1, std::vector<int> arr2) {
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

int main() {
    std::vector<int> arr = {5, 3, 8, 2, 1, 9};
    int k = 3;
    std::vector<int> result = maximum(arr, k);

    std::vector<int> expected = {9, 8, 5};
    bool same = issame(result, expected);
    std::cout << "Result and Expected are " << (same ? "same" : "different") << std::endl;

    return 0;
}