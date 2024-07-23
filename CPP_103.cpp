#include <bits/stdc++.h>
using namespace std;

string rounded_avg(int n, int m) {
    if (n > m)
        return "-1";
    long long sum = 0;
    for (int i = n; i <= m; i++)
        sum += i;
    long long avg = round((long double)sum / (m - n + 1));
    string res = "";
    while (avg > 0) {
        if (avg & 1)
            res.push_back('1');
        else
            res.push_back('0');
        avg >>= 1;
    }
    std::reverse(res.begin(), res.end());
    return res;
}