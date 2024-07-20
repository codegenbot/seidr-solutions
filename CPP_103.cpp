#include <cassert>
#include <string>
#include <iostream>
#include <cmath>

std::string rounded_avg(int n, int m) {
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
    assert(rounded_avg(5, 5) == "101");
    return 0;
}