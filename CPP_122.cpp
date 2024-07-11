```cpp
#include <iostream>
#include <vector>
#include <string>

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
    std::vector<int> arr;
    int k;

    std::cout << "Enter number of elements: ";
    std::cin >> k;

    arr.resize(k);

    for (int i = 0; i < k; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> arr[i];
    }

    int result = add_elements(arr, k);
    std::cout << "Sum of elements <= 2: " << result << std::endl;

    return 0;
}