#include <iostream>
#include <vector>

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (arr[i] >= 10 && arr[i] <= 99) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> v = {5, 15, 25, 10, 100}; // Example array
    int k = 5; // Number of elements to consider

    std::cout << add_elements(v, k) << std::endl; // Output the result

    return 0;
}