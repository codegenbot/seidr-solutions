#include <iostream>
#include <string>
#include <cassert>

std::string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    long sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = round((double)sum / (m - n + 1));
    std::string res = "";
    while (avg > 0) {
        if (avg >= 2) {
            res = "1" + res;
            avg -= 2;
        } else {
            res = "0" + res;
            avg--;
        }
    }
    return res;
}

int main() {
    assert(rounded_avg(5, 5) == "101");
    return 0;
}