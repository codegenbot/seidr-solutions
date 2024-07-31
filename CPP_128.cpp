#include <vector>
#include <iostream>
#include <initializer_list>

int prod_signs(const std::vector<int>& arr) {
    int product = 1;
    for (int x : arr) {
        if (x == 0) return 0; 
        product *= (x > 0 ? 1 : -1);
    }
    return product;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> arr[i];
    }
    int result = prod_signs(arr);
    if(result == 0) {
        std::cout << "Product of signs: zero, Sum of absolute values: 0" << std::endl;
    } else if (result > 0) {
        std::cout << "Product of signs: positive, Sum of absolute values: " << result << std::endl;
    } else {
        std::cout << "Product of signs: negative, Sum of absolute values: " << -result << std::endl;
    }
}