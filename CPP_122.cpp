#include <iostream>
#include <vector>

int add_elements(const std::vector<int>& arr, int k) {
    int sum = 0;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] >= 10 && arr[i] <= 99) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> arr;
    int k;
    
    // Read vector elements from user input
    int num;
    while(std::cin >> num) {
        arr.push_back(num);
    }

    // Read integer k from user input
    std::cin >> k;

    // Call the add_elements function and print the result
    std::cout << add_elements(arr, k) << std::endl;

    return 0;
}