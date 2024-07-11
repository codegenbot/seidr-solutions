#include <iostream>
#include <vector>

void testMain() {
    int n; 
    std::cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i)
        std::cin >> arr[i];

    int result = prod_signs(arr, n);
    delete[] arr;

    std::cout << "The product of signs is: " << (result > 0) ? std::to_string(result) : "-" << std::endl;
    return;
}

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