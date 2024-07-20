#include <string>
#include <iostream>
#include <cmath>

std::string calculateBinaryAverage(int n, int m) {
    if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    int result = sum / (m - n + 1);
    
    std::string binary_avg = "";
    while (result > 0) {
        binary_avg = std::to_string(result % 2) + binary_avg;
        result /= 2;
    }
    
    return binary_avg;
}

int main() {
    std::cout << calculateBinaryAverage(5, 5) << std::endl;
    return 0;
}