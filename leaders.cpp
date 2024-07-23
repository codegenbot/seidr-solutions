```c++
#include <iostream>
#include <vector>

std::vector<int> leaders(std::vector<int>& arr) {
    std::vector<int> result;
    int maxRight = 0;
    for (int i = arr.size() - 1; i >= 0; --i) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            result.push_back(maxRight);
        }
    }
    return result;
}

int main() {
    std::vector<int> arr = {1, 3, 4, 1, 5};
    std::vector<int> result = leaders(arr);
    for (int x : result) {
        std::cout << x << " ";
    }
    return 0;
}