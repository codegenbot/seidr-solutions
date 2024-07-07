```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> originalArr = arr; // Create a copy of the input vector
    std::sort(originalArr.begin(), originalArr.end());
    std::vector<int> result;
    for (int i = 0; i < k; i++) {
        result.push_back(originalArr[originalArr.size() - 1 - i]);
        originalArr.pop_back();
    }
    return result;
}

int main() { 
    std::vector<int> arr = {1, 2, 3, -23, 243, -400, 0};
    int k = 4;
    std::vector<int> result = maximum(arr, k);
    if (result != std::vector<int>({0, 243, -23, 3})) {
        return 1;
    }
    return 0;
}