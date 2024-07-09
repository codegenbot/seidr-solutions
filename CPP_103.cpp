#include <cmath>
#include <string>

string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    long sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = round((double)sum / (m - n + 1));
    string binary = "";
    while (avg > 0) {
        if (avg >= 2) {
            avg /= 2;
            binary.insert(0, "1");
        } else {
            avg *= 2;
            binary.insert(0, "0");
        }
    }
    return binary;
}