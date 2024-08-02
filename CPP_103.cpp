#include <string>
#include <cmath>

using namespace std;

string rounded_avg(int n, int m) {
    if (n > m)
        return "-1";
    long sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = std::round((double)sum / (m - n + 1));
    string result = to_string(avg);
    while (result.length() < 8) {
        result = "0" + result;
    }
    return result;
}