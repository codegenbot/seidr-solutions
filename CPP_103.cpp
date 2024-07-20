#include <string>
#include <iostream>
#include <cmath>
#include <cassert>

std::string calculateBinaryAverage(int n, int m) {
    if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    int result = std::round((double)sum / (m - n + 1));
    
    std::string binary_avg = "";
    while (result > 0) {
        binary_avg = std::to_string(result % 2) + binary_avg;
        result /= 2;
    }
    
    return binary_avg;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    
    std::string result = calculateBinaryAverage(n, m);
    std::cout << result << std::endl;
    
    assert(calculateBinaryAverage(5, 5) == "101");

    return 0;
}