#include <iostream>
#include <string>
#include <cmath>
#include <cassert>
#include <sstream>

std::string rounded_avg(int n, int m) {
    if (n > m) {
        return "-1";
    }
    
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    int avg = round((double)sum / (m - n + 1));
    
    std::stringstream ss;
    while (avg > 0) {
        ss << avg % 2;
        avg /= 2;
    }
    
    return ss.str();
}