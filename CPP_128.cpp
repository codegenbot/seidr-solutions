```cpp
#include <iostream>
#include <vector>

int prod_signs(int* arr, int n) {
    if (n == 0) return 1;
    int sign = 1;
    for (int i = 0; i < n; ++i) {
        sign *= (arr[i] > 0 ? 1 : arr[i] < 0 ? -1 : 1);
    }
    return sign;
}

int main() {
    int n; 
    std::cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i)
        std::cin >> arr[i];

    int result = prod_signs(arr, n);
    delete[] arr;

    std::cout << "The product of signs is: " << result << '\n';
    return 0;
}