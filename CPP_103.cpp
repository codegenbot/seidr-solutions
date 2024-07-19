#include <string>
#include <cassert>
#include <cmath>
using namespace std;

std::string calculateBinaryAvg(int n, int m) {
    assert(n >= 0 && m >= 0);

    if (n > m) {
        return "-1";
    }

    int sum = 0;
    for (int i = n; i <= m; ++i) {
        sum += i;
    }

    int avg = std::round((double)sum / (m - n + 1));

    std::string binaryAvg = "";
    while (avg > 0) {
        binaryAvg = to_string(avg % 2) + binaryAvg;
        avg /= 2;
    }

    return binaryAvg;
}