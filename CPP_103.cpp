#include <string>

string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    
    double sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = std::round(sum / (m - n + 1));
    string bin = "";
    while (avg > 0) {
        if (avg >= 2) {
            avg -= 2;
            bin.append("10", 1, 2);
        } else {
            avg++;
            bin.append("0", 1, 1);
        }
    }
    return bin;
}