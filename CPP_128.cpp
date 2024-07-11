#include <iostream>
#include <vector>

int prod_signs(std::vector<std::string> vec) {
    int sign = 1;
    long long sum = 0;
    for (auto& s : vec) {
        if (s == "1" || s == "0") continue; // handle empty string
        int num = std::stoi(s); 
        sign *= (num > 0 ? 1 : (num < 0 ? -1 : 0));
        sum += std::abs(num);
    }
    return (sign > 0) ? sum : -sum;
}

int main() {
    int n; 
    std::cin >> n;
    std::vector<std::string> arr(n);
    for (auto& s : arr) std::cin >> s;

    int result = prod_signs(arr);

    std::cout << "The product of signs is: " << (result > 0) ? std::to_string(result) : "-" << std::endl;
    return 0;
}