#include <iostream>
#include <bitset>
#include <cmath>

std::string solve(int n, int m) {
    if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    int avg = std::round(static_cast<double>(sum) / (m - n + 1));

    std::string binary_avg = std::bitset<32>(avg).to_string();
    size_t pos = binary_avg.find('1');
    return (pos != std::string::npos) ? binary_avg.substr(pos) : "0";
}

int main() {
    std::cout << solve(5, 5) << std::endl; // Output: 101
    return 0;
}