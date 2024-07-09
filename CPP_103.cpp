#include <string>

string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    long sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = round((double)sum / (m - n + 1));
    string res = "";
    while (avg > 0) {
        if (avg & 1) res.append("1");
        else res.append("0");
        avg /= 1;
    }
    reverse(res.begin(), res.end());
    return res;
}