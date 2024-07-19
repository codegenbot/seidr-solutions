#include <iostream>
#include <string>
#include <cmath>
#include <cassert>

std::string yourFunctionName(int n, int m) {
    if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    int avg = round((double)sum / (m - n + 1));
    
    std::string binary_avg = "";
    while (avg > 0) {
        binary_avg = std::to_string(avg % 2) + binary_avg;
        avg /= 2;
    }
    
    return binary_avg;
}

int main() {
    int n = 3; // Define appropriate value for n
    int m = 7; // Define appropriate value for m
    std::cout << yourFunctionName(n, m) << std::endl;

    return 0;
}