#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string rounded_avg(int n, int m) {
    if (n > m) {
        return "-1";
    }
    double avg = 0.0;
    for (int i = n; i <= m; i++) {
        avg += i;
    }
    avg /= (m - n + 1);
    int rounded_avg = round(avg);
    string binary_string = "";
    while (rounded_avg > 0) {
        binary_string = to_string(rounded_avg % 2) + binary_string;
        rounded_avg /= 2;
    }
    return binary_string;
}