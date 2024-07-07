#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    
    double sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    
    double avg = round(sum / (m - n + 1));
    
    string binary = "";
    while (avg > 0) {
        if (avg >= 2) {
            avg /= 2;
            binary = "1" + binary;
        } else {
            avg++;
            binary = "0" + binary;
        }
    }
    
    return binary;
}

int main() {
    cout << rounded_avg(1, 5) << endl; // "11"
    cout << rounded_avg(7, 5) << endl; // "-1"
    cout << rounded_avg(10, 20) << endl; // "1111"
    cout << rounded_avg(20, 33) << endl; // "11010"
    
    return 0;
}