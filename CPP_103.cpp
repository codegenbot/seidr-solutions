#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

string rounded_avg(int n, int m) {
    if (n > m)
        return "-1";
    double sum = 0;
    for (int i = n; i <= m; i++)
        sum += i;
    int avg = lround(sum / (m - n + 1));
    string res = "";
    while (avg) {
        if (avg & 1)
            res.push_back('1');
        else
            res.push_back('0');
        avg >>= 1;
    }
    reverse(res.begin(), res.end());
    return res;
}