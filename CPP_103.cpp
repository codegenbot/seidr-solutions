#include <cmath>
#include <string>

using namespace std;

string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    long sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = (double)sum / ((long)(m - n + 1));
    int rounded_avg = floor(avg);
    string result = "";
    while (rounded_avg > 0) {
        if (rounded_avg & 1)
            result.push_back('1');
        else
            result.push_back('0');
        rounded_avg >>= 1;
    }
    reverse(result.begin(), result.end());
    return result;
}