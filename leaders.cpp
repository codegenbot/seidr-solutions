#include <vector>
#include <algorithm>

std::vector<int> leaders(std::vector<int>& arr) {
    int maxRight = arr.back();
    std::vector<int> result;
    for (int i = arr.size() - 2; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            result.push_back(arr[i]);
            maxRight = arr[i];
        }
    }
    result.push_back(arr.back());
    return result;
}

int main() {
    std::vector<int> arr = {16, 17, 4, 3, 5, 2, 8, 9, 1, 3};
    std::vector<int> result = leaders(arr);
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}