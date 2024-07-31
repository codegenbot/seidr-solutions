#include <cmath>
#include <bitset>

int calculateAvg(int n, int m) {
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
    string expected_result = "3";
    string output = calculateAvg(n, m);
    assert(output == expected_result);
    return 0;
}