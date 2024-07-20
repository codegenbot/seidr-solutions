#include <string>
#include <cmath>

std::string rounded_avg(int n, int m) {
    if (n > m) {
        return "-1";
    }

    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }

    int avg = std::round(static_cast<double>(sum) / (m - n + 1));
    std::string binary = "";
    while (avg > 0) {
        binary = std::to_string(avg % 2) + binary;
        avg /= 2;
    }

    return binary.empty() ? "0" : binary;
}