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
    int k;
    std::cout << "Enter the value of k: ";
    std::cin >> k;

    std::vector<int> arr(k);
    std::cout << "Enter " << k << " elements: ";
    for (int i = 0; i < k; i++) {
        std::cin >> arr[i];
    }

    int result = add_elements(arr, k);
    std::cout << "Sum of elements between 10 and 100: " << result << std::endl;

    return 0;
}