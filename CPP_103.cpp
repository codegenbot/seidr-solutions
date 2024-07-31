#include <iostream>
#include <bitset>
#include <cmath>
#include <cassert>

std::string rounded_avg(int n, int m) {
    if (n > m) {
        return "-1";
    }
    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    int avg = std::round((double)sum / (m - n + 1));
    std::string binary_avg = std::bitset<32>(avg).to_string();
    size_t index = binary_avg.find('1');
    return binary_avg.substr(index);
}