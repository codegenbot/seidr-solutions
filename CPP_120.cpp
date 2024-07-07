#include <iostream>
#include <vector>
#include <algorithm>

bool compareVectors(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> arrCopy(arr);
    std::sort(arrCopy.begin(), arrCopy.end());
    std::vector<int> result;
    for (int i = 0; i < k && i < arrCopy.size(); i++) {
        if (arrCopy.size() > k) {
            result.push_back(arrCopy[arrCopy.size() - 1 - i]);
        } else {
            result.push_back(arrCopy[0]);
            break;
        }
    }
    return result;
}

int mainTest() { 
    std::vector<int> arr = {1, 2, 3, -23, 243, -400, 0};
    int k = 4;
    if (arr.size() == 0) {
        return 0; // Exit successfully
    }
    std::vector<int> expected = {};
    if (!compareVectors(maximum(arr, k), expected)) {
        return 1; // Return error code
    }
    return 0;
}