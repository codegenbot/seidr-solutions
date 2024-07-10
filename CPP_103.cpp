#include <iostream>
#include <string>

using namespace std;

string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    long sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = round((double)sum / (m - n + 1));
    string binary = "";
    while (avg > 0) {
        if (avg >= 2) {
            avg -= 2;
            binary += "1";
        } else {
            avg = 0;
            binary += "0";
        }
    }
    return binary;
}