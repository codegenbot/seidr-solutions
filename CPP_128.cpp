```
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
    std::cout << "Product of signs: " << (result == 0 ? "zero" : (result > 0 ? "positive" : "negative")) << ", Sum of absolute values: " << std::abs(result) << std::endl;
    return 0;
}