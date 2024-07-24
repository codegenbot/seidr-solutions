#include <cmath>
using namespace std;

string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    double sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    int avg = static_cast<int>(floor((sum / (m - n + 1)) + 0.5));
    string res;
    while (avg > 0) {
        if (avg & 1) res.push_back('1');
        else res.push_back('0');
        avg >>= 1;
    }
    reverse(res.begin(), res.end());
    return res;
}