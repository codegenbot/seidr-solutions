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
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> arr[i];
    }
    std::cout << "Enter the value of k: ";
    std::cin >> k;
    int result = add_elements(arr, k);
    std::cout << "Sum of elements with size <= 2 is: " << result << std::endl;
    return 0;
}