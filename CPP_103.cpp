#include <string>

string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    double sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = round((double)sum / (m - n + 1));
    string res = "";
    while (avg > 0) {
        if (avg >= 2) { 
            res.push_back('1');
            avg -= 2;
        } else if (avg == 1) {
            res.push_back('1');
            avg = 0;
        }
        if (avg > 0) {
            res.push_back('0');
            avg /= 2;
        }
    }
    reverse(res.begin(), res.end());
    return res;