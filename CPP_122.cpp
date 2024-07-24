#include <iostream>
#include <vector>

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (std::to_string(arr[i]).size() <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> vec;
    int num, k;

    std::cout << "Enter the number of elements: ";
    std::cin >> k;

    for (int i = 0; i < k; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        vec.push_back(num);
    }

    int result = add_elements(vec, k);

    std::cout << "Sum of elements with digit count <= 2: " << result << std::endl;

    return 0;
}