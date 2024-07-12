#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

string rounded_avg(int n, int m) {
    if (n > m)
        return "-1";
    double sum = 0;
    for (int i = n; i <= m; i++)
        sum += i;
    double avg = round(sum / (m - n + 1));
    string bin = "";
    while (avg > 0) {
        if (avg >= 2)
            bin = "1" + bin, avg -= 2;
        else
            bin = "0" + bin;
        avg /= 2;
    }
    return bin;
}