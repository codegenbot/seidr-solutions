#include<stdio.h>
#include<math.h>
#include<string>
using namespace std;

string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    int sum = 0, count = 0;
    for (int i = n; i <= m; ++i) {
        sum += i;
        count++;
    }
    int avg = sum / count;
    string binary = "";
    while (avg > 0) {
        binary = (avg % 2 == 0 ? "0" : "1") + binary;
        avg /= 2;
    }
    return binary == "" ? "0" : binary;
}