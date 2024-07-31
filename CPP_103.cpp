#include <cmath>
#include <bitset>

int average(int n, int m) {
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
    int n = 3;
    int m = 8;
    std::string expected_result = "5";
    std::string output = average(n, m);
    assert(output == expected_result);
    return 0;
}