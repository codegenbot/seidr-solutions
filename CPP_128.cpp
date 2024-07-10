#include <iostream>
#include <vector>

int prod_signs(std::vector<int>& arr) {
    if (arr.empty()) return -32768;
    int sign = 1;
    long long sum = 0;
    for (int num : arr) {
        sign *= (num > 0 ? 1 : (num < 0 ? -1 : 0));
        sum += std::abs(num);
    }
    return (sign > 0) ? sum : -sum;
}

int main() {
    int n; 
    std::cin >> n;
    std::vector<int> arr(n);
    for (int& num : arr)
        std::cin >> num;

    int result = prod_signs(arr);

    std::cout << "The product of signs is: " << result << '\n';
    return 0;
}