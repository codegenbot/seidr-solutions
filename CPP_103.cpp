#include <string>

using namespace std;

string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    double sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    int average = lround(sum / (double)(m - n + 1));
    string result = "";
    while (average > 0) {
        if (average & 1)
            result.push_back('1');
        else
            result.push_back('0');
        average >>= 1;
    }
    reverse(result.begin(), result.end());
    return result;
}