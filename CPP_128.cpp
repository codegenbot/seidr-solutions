```c++
#include <vector>
#include <algorithm>

int prod_signs(const std::vector<int>& arr) {
    int sign = 1;
    for (int num : arr) {
        if (num > 0) {
            sign *= 1;
        } else if (num < 0) {
            sign *= -1;
        }
    }
    return sign;
}

int main() {
    std::vector<int> arr = {-1, 1, 1, 0};
    int result = prod_signs(arr);
    std::cout << "Product of signs: " << (result == 0 ? "zero" : (result > 0 ? "positive" : "negative")) << ", Sum of absolute values: " << std::abs(result) << std::endl;
    return 0;
}