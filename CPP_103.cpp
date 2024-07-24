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
            bin += '1';
        } else {
            avg++;
            bin += '0';
        }
    }
    return bin;
}