```
#include <string>

std::string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    long sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = round((double)sum / (m - n + 1));
    std::string binary = "";
    while (avg > 0) {
        if (avg >= 2) {
            avg -= 2;
            binary += '1';
        } else {
            avg++;
            binary += '0';
        }
    }
    reverse(binary.begin(), binary.end());
    return binary;
}