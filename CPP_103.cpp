#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string rounded_avg(int n, int m) {
    if (n > m) {
        return "-1";
    }

    int sum = 0;
    int count = 0;

    for (int i = n; i <= m; i++) {
        sum += i;
        count++;
    }

    int avg = round(sum / (double)count);
    string binary = "";

    while (avg > 0) {
        binary += to_string(avg % 2);
        avg /= 2;
    }

    reverse(binary.begin(), binary.end());

    return binary;
}