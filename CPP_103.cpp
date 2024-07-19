#include <iostream>
#include <string>
#include <cassert>
#include <cmath>

std::string rounded_avg(int n, int m) {
    if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; ++i) {
        sum += i;
    }
    
    int avg = std::round((double)sum / (m - n + 1));
    
    std::string binaryAvg = "";
    while (avg > 0) {
        binaryAvg = std::to_string(avg % 2) + binaryAvg;
        avg /= 2;
    }
    
    return binaryAvg;
}

int main() {
    assert (rounded_avg(5, 5) == "101");
}