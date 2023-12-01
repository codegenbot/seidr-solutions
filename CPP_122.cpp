#include <iostream>
#include <vector>

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (arr[i] >= 10 && arr[i] < 100) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    int k;
    std::cin >> k;
    int result = add_elements(arr, k);
    std::cout << result << std::endl;
    return 0;
}