```cpp
#include <iostream>

int prod_signs(int arr[]) {
    int sign = 1;
    for (int num : arr) {
        if (num < 0)
            sign *= -1;
    }
    return sign;
}

int main() {
    int result = prod_signs({-1, 1, 1, 0});
    std::cout << result << std::endl;
}