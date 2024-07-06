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

int main_test() {
    std::vector<int> vec;
    int n, k;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        std::cin >> k;
        vec.push_back(k);
    }
    int result = add_elements(vec, n);
    std::cout << "The sum of elements with length <= 2 is: " << result << std::endl;
    return 0;
}