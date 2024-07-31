#include <cmath>
#include <bitset>

int findAverage(int n, int m) {
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
    int n = 5;
    int m = 10;
    int expected_avg = 7;
    assert(findAverage(n, m) == std::to_string(expected_avg));
    return 0;
}