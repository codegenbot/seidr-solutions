#include <string>
#include <cmath>
#include <cassert>

std::string calculate_binary_avg(int n, int m) {
    if (n > m) {
        return "-1";
    }

    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }

    int rounded_avg;
    rounded_avg = std::round((double)sum / (m - n + 1));

    std::string binary_avg = "";
    while (rounded_avg > 0) {
        binary_avg = std::to_string(rounded_avg % 2) + binary_avg;
        rounded_avg /= 2;
    }

    return binary_avg;
}

// Remove the main function definition here