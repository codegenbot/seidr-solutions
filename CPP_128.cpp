```cpp
#include <initializer_list>
#include <vector>
#include <iostream>

int prod_signs(const std::vector<int>& arr) {
    int product = 1;
    for (int x : arr) {
        if (x == 0) return 0; 
        product *= (x > 0 ? 1 : -1);
    }
    return product;
}

int main() {
    std::vector<int> arr = {-1, 1, 1, 0};
    int result = prod_signs(arr);
    if(result == 0) {
        std::cout << "Product of signs: zero, Sum of absolute values: 0" << std::endl;
    } else if (result > 0) {
        std::cout << "Product of signs: positive, Sum of absolute values: " << result << std::endl;
    } else {
        std::cout << "Product of signs: negative, Sum of absolute values: " << -result << std::endl;
    }
    return 0;
}