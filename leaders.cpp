#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {1, 3, 4, 2, 8};
    std::vector<int> result;
    int maxRight = 0;
    for (int i = arr.size() - 1; i >= 0; --i) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            result.push_back(maxRight);
        }
    }
    std::cout << "[";
    for (int leader : result) {
        std::cout << leader << " ";
    }
    std::cout << "]" << std::endl;
    return 0;
}