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
    double avg = round(sum / (m - n + 1));
    string result = "";
    while (avg > 0) {
        if ((int)(avg * 2))
            result += "1";
        else
            result += "0";
        avg /= 2;
    }
    std::reverse(result.begin(), result.end());
    return result;
}