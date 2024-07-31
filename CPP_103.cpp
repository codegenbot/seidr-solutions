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
    int n = 5;
    int m = 10;
    std::string expected_result = "7";
    std::string result = calculateAverage(n, m);
    assert(result == expected_result);
    return 0;
}