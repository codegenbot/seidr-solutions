#include <string>
#include <cmath>
#include <cassert>

std::string calculate_binary_avg(int n, int m);

std::string calculate_binary_avg(int n, int m) {
    if (n > m) {
        return "-1";
    }

    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }

    int avg = sum / (m - n + 1);

    return calculate_binary_avg(avg);
}