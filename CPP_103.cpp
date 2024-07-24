#include <cmath>
#include <string>
using namespace std;

string rounded_avg(int n, int m) {
    if (n > m)
        return "-1";
    double sum = 0;
    for (int i = n; i <= m; ++i)
        sum += i;
    double avg = ceil(sum / (m - n + 1.0));
    string binStr = "";
    while (avg) {
        if (avg & 1)
            binStr.insert(binStr.begin(), '1');
        else
            binStr.insert(binStr.begin(), '0');
        avg >>= 1;
    }
    return binStr.empty() ? "0" : binStr;
}