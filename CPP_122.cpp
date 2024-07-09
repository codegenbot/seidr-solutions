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
    int n, k;
    std::cout << "Enter the value of k: ";
    std::cin >> k;

    std::vector<int> arr;
    std::cout << "Enter " << k << " integers separated by spaces: ";

    for (int i = 0; i < k; i++) {
        int num;
        std::cin >> num;
        arr.push_back(num);
    }

    int result = add_elements(arr, k);

    std::cout << "Sum of elements between 10 and 99: " << result << std::endl;

    return 0;
}