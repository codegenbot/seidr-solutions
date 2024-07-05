#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    int sum = 0, count = 0;
    for (int i = n; i <= m; ++i) {
        sum += i;
        count++;
    }
    int avg = round(static_cast<double>(sum) / count); // Rounding the average
    string binary = "";
    while (avg > 0) {
        binary = (avg % 2 == 0 ? "0" : "1") + binary;
        avg /= 2;
    }
    return binary == "" ? "0" : binary;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << rounded_avg(n, m) << endl;
    return 0;
}