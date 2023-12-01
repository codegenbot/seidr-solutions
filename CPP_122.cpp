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
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int k;
    std::cout << "Enter the value of k: ";
    std::cin >> k;

    int result = add_elements(arr, k);
    std::cout << "Sum of elements greater than or equal to 10 and less than 100 in the first " << k << " elements: " << result << std::endl;

    return 0;
}