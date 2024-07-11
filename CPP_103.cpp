#include <iostream>
#include <string>
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

    int avg = round((double)sum / (m - n + 1));
    std::string binary_avg = std::bitset<32>(avg).to_string();
    return binary_avg.substr(binary_avg.find('1'));
}

int main() {
    std::string result = rounded_avg(5, 5);
    std::cout << result << std::endl;
    return 0;
}