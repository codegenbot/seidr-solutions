#include<stdio.h>
#include<math.h>
#include<string>
using namespace std;

string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    
    int totalNumbers = m - n + 1;
    int sum = (totalNumbers * (n + m)) / 2;
    int avg = sum / totalNumbers;
    int roundedAvg = floor(avg + 0.5);

    string binary = "";
    while (roundedAvg > 0) {
        binary = (roundedAvg % 2 == 0 ? "0" : "1") + binary;
        roundedAvg /= 2;
    }
    
    return binary.empty() ? "0" : binary;
}