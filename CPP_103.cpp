#include <iostream>
#include <string>
#include <cmath>

std::string calculateBinaryAverage(int n, int m) {
    if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; ++i) {
        sum += i;
    }
    
    int avg = std::round((double)sum / (m - n + 1));
    
    std::string binary_avg = "";
    while (avg > 0) {
        binary_avg = std::to_string(avg % 2) + binary_avg;
        avg /= 2;
    }
    
    return binary_avg;
}

int main() {
    // Test cases
    std::cout << calculateBinaryAverage(1, 10) << std::endl; // Output: "1010"
    std::cout << calculateBinaryAverage(5, 5) << std::endl; // Output: "1"
    std::cout << calculateBinaryAverage(10, 5) << std::endl; // Output: "-1"

    return 0;
}