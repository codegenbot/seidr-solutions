#include <iostream>
#include <vector>

int add_elements(std::vector<int> arr, int k);

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (to_string(arr[i]).size() <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int n, k;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::cout << "Enter " << n << " numbers: ";
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    std::cout << "Enter k: ";
    std::cin >> k;
    int result = add_elements(arr, k);
    std::cout << "The sum of the numbers is: " << result << std::endl;
    return 0;
}