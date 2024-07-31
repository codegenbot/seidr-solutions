```cpp
#include <cmath>
#include <string>

std::string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    double avg = (n + m) * 1.0 / 2;
    avg = std::floor(avg);
    std::string res = "";
    while (avg > 0) {
        avg -= avg % 2;
        res.push_back('1');
        avg /= 2;
    }
    return res;
}