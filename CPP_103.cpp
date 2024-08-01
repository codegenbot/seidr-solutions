#include <iostream>
#include <string>
#include <cmath>

std::string findBinaryAvg(int n, int m) {
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
    std::cout << findBinaryAvg(4, 7) << std::endl; // Test case
    return 0;
}