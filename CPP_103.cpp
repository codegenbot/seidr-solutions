#include <iostream>
#include <string>
#include <cassert>
#include <cmath>

std::string calculateBinaryString(int n, int m) {
    if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; ++i) {
        sum += i;
    }
    
    int avg = std::round((double)sum / (m - n + 1));
    
    std::string binary;
    while (avg > 0) {
        binary = std::to_string(avg % 2) + binary;
        avg /= 2;
    }
    
    return binary;
}

int main() {
    int n = 2, m = 5;
    std::string result = calculateBinaryString(n, m);
    assert(result == "110");
    
    return 0;
}