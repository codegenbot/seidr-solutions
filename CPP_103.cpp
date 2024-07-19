#include <iostream>
#include <string>
#include <cassert>
#include <cmath>

std::string calculateBinary(int n, int m) {
    if (n > m) {
        return "-1";
    }

    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }

    int rounded_avg = round((double)sum / (m - n + 1));
    std::string binary = "";
    while (rounded_avg > 0) {
        binary = std::to_string(rounded_avg % 2) + binary;
        rounded_avg /= 2;
    }

    return binary;
}

int main() {
    assert(calculateBinary(5, 5) == "101");
    return 0;
}