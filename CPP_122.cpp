#include <iostream>
#include <vector>

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < std::min(k, (int)arr.size()); i++) {
        if (std::to_string(arr[i]).size() <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> arr;
    int k;
    std::cout << "Enter elements separated by space: ";
    for (int i = 0; i < 5; i++) {
        int num;
        std::cin >> num;
        arr.push_back(num);
    }
    std::cout << "Enter the number of elements to consider: ";
    std::cin >> k;
    int result = add_elements(arr, k);
    std::cout << "Sum of elements with length less than or equal to 2 is: " << result << std::endl;
    return 0;
}