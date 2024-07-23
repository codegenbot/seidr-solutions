```cpp
#include <iostream>
#include <vector>

std::vector<int> leaders(std::vector<int>& arr) {
    std::vector<int> result;
    int maxRight = arr.back();
    for (int i = arr.size() - 1; i >= 0; --i) {
        if (arr[i] >= maxRight) {
            result.push_back(arr[i]);
            maxRight = arr[i];
        }
    }
    return result;
}

int main() {
    std::vector<int> arr = {1, 3, 4, 3, 2, 3, 1, 1};
    std::vector<int> result = leaders(arr);
    for (int x : result) {
        std::cout << x << " ";
    }
    return 0;
}