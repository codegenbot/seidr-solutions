#include <cmath>

using namespace std;

string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    double sum = 0;
    for (int i = n; i <= m; ++i) {
        sum += i;
    }
    double avg = floor((sum + 0.5) / (m - n + 1));
    string res = to_string(avg);
    return res.substr(0, res.length() - 2) + "b";