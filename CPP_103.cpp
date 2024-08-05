#include <string>
#include <cassert>
#include <cmath>

std::string calculate_binary_avg(int n, int m) {
    assert(calculate_binary_avg(5, 5) == "101");

    if (n > m) {
        return "-1";
    }

    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }

    int rounded_avg = std::round((double)sum / (m - n + 1));

    std::string binary_avg = "";
    while (rounded_avg > 0) {
        binary_avg = std::to_string(rounded_avg % 2) + binary_avg;
        rounded_avg /= 2;
    }

    return binary_avg;
}