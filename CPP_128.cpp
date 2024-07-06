#include <iostream>
#include <vector>

int prod_signs(std::vector<int> arr) {
    int sign_product = 1;
    long long sum_of_magnitudes = 0;
    
    for (int num : arr) {
        if (num == 0) {
            return -32768; // empty array or array with only zeros
        }
        sign_product *= (num > 0 ? 1 : (num < 0 ? -1 : 0));
        sum_of_magnitudes += abs(num);
    }
    
    return (sign_product == 0) ? -32768 : sum_of_magnitudes * sign_product;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
    
    int result = prod_signs(arr);
    
    if(result == -32768) {
        std::cout << "Invalid input. Array must contain at least one non-zero element.";
    } else {
        std::cout << "The product of signs and the sum of magnitudes is: " << result;
    }
    
    return 0;
}