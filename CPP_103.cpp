#include <cmath>
#include <bitset>

int calculateAverage(int n, int m) {
    if (n > m) {
        return "-1";
    }

    int sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }

    int avg = static_cast<int>(round((double)sum / (m - n + 1)));
    return std::to_string(avg);
}

int main() {
    int n = 1, m = 5;
    std::string expected_avg = "3";
    std::string calculated_avg = calculateAverage(n, m);
    assert(calculated_avg == expected_avg);
    return 0;
}