#include <iostream>
#include <vector>

int prod_signs(int* arr, int n) {
    if (n == 0) return -32768;
    bool isNegative = false;
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        if(arr[i] < 0){
            isNegative = !isNegative;
        }
        sum += std::abs(arr[i]);
    }
    return (isNegative ? -sum : sum);
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