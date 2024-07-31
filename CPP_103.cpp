#include <cmath>
#include <bitset>

int calculate_avg(int n, int m) {
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
    int n = 1;
    int m = 5;
    std::string expected_result = "3";
    std::string result = calculate_avg(n, m);
    assert(result == expected_result);
    return 0;
}