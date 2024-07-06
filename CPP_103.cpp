#include <string>
#include <cmath>

std::string rounded_avg(int n, int m) {
    if (n > m)
        return "-1";
    double sum = 0;
    for (int i = n; i <= m; i++)
        sum += i;
    double avg = std::round((double)(sum) / (m - n + 1));
    std::string res;
    while (avg >= 1.0) {
        res.push_back((avg)%2?'1':'0');
        avg /= 2;
    }
    return res;