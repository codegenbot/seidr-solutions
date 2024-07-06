```
#include <iostream>
#include <string>
using namespace std;

string rounded_avg(int n, int m) {
    if (n > m)
        return "-1";
    double sum = 0;
    for (int i = n; i <= m; i++)
        sum += i;
    int average = lround(sum / (double)(m - n + 1));
    string binary = "";
    while (average > 0) {
        if (average & 1)
            binary.insert(0, "1");
        else
            binary.insert(0, "0");
        average /= 2;
    }
    return binary;
}