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
    std::vector<int> arrCopy = arr; 
    std::sort(arrCopy.begin(), arrCopy.end());
    std::vector<int> result;
    if (k > arrCopy.size()) k = arrCopy.size();
    for (int i = 0; i < k; i++) {
        result.push_back(arrCopy[arrCopy.size() - 1 - i]);
        arrCopy.pop_back();
    }
    return result;
}

int main() { 
    std::vector<int> arr = {1, 2, 3, -23, 243, -400, 0};
    int k = 4;
    if (maximum(arr, k) != std::vector<int>({0, 243, -23, 3})) {
        return 1;
    }
    return 0;
}