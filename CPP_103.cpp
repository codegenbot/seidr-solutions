#include <cstddef>
#include <iostream>
#include <string>
#include <bitset>
#include <cmath>

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
    size_t pos = binary_avg.find('1');
    if (pos != std::string::npos) {
        return binary_avg.substr(pos);
    }

    return "0";
}