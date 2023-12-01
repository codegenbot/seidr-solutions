#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string rounded_avg(int n, int m);

int main() {
    cout << rounded_avg(1, 5) << endl; // Expected output: "101"
    cout << rounded_avg(0, 10) << endl; // Expected output: "1011"
    cout << rounded_avg(10, 5) << endl; // Expected output: "-1"
}

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
    int avg = round((double)sum / count);
    string binary = "";
    while (avg > 0) {
        binary = to_string(avg % 2) + binary;
        avg /= 2;
    }
    return binary;
}