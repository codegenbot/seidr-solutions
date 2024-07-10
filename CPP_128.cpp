```
#include <iostream>
#include <vector>

int prod_signs(const std::vector<int>& arr) {
    int sign = 1;
    long long sum = 0;
    for (const auto& i : arr) {
        sign *= (i > 0 ? 1 : (i < 0 ? -1 : 1));
        sum += std::abs(i);
    }
    return (sign > 0) ? sum : -sum;
}

int main() {
    int n; 
    std::cin >> n;
    std::vector<int> arr(n);
    for (auto& i : arr)
        std::cin >> i;

    int result = prod_signs(arr);

    std::cout << "The product of signs is: " << result << '\n';
    return 0;
}