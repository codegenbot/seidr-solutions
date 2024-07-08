#include <iostream>
#include <vector>

int findFirstNegativeIndex(const std::vector<int>& arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); ++i) {
        sum += arr[i];
        if (sum < 0) return i;
    }
    return -1;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    std::cout << findFirstNegativeIndex(arr) << std::endl;
    return 0;
}