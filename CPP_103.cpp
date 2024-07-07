#include <string>

using namespace std;

string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    long sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = round((double)sum / (m - n + 1));
    string res = to_string(avg);
    int len = res.length();
    if (res[len-1] - '0' >= 5) {
        avg++;
        res = to_string(avg);
    }
    res.erase(res.find_last_not_of("0123456789") + 1);
    return res;
}