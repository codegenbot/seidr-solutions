#include <cmath>
#include <bitset>

string completeCode(int n, int m) {
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
    string result = completeCode(n, m);
    assert(result == "3");
    return 0;
}