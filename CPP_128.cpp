```cpp
#include <iostream>
#include <vector>

int prod_signs(int* arr, int n) {
    if (n == 0) return -32768;
    int sign = 1;
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        sign *= (arr[i] > 0 ? 1 : (arr[i] < 0 ? -1 : 0));
        sum += std::abs(arr[i]);
    }
    return (sign > 0) ? sum : -sum;
}

int main() {
    int n; 
    std::cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i)
        std::cin >> arr[i];

    int result = prod_signs(arr, n);
    delete[] arr;

    std::cout << (result > 0) ? "The product of signs is: " : "The product of signs is -" << std::to_string(result) << '\n';
    return 0;
}