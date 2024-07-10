#include <string>
#include <iostream>
#include <cmath>

std::string solve(int n, int m) {
    if (n > m) {
        return "-1";
    }
    
    long long sum = (long long)(m + n) * (m - n + 1) / 2;
    
    std::string binary = "";
    while (sum > 0) {
        binary = std::to_string(sum % 2) + binary;
        sum /= 2;
    }
    
    return binary;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    std::cout << solve(n, m) << std::endl;
    return 0;
}