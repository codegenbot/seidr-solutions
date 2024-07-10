```
#include <vector>
#include <iostream>

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < std::min(k, arr.size()); i++) { 
        if (arr[i] < 10) { 
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> arr;
    int k;

    std::cout << "Enter the size of the array: ";
    std::cin >> k;
    
    arr.resize(k);
    
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < k; i++) {
        std::cin >> arr[i];
    }
    
    int result = add_elements(arr, k);
    std::cout << "Sum of elements less than 10 is: " << result;
    return 0;
}