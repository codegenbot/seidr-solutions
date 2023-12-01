#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string rounded_avg(int n, int m);

int main() {
    // Test cases
    cout << rounded_avg(1, 10) << endl;  // Expected output: 11
    cout << rounded_avg(10, 1) << endl;  // Expected output: -1
    cout << rounded_avg(5, 5) << endl;  // Expected output: 1
    cout << rounded_avg(0, 7) << endl;  // Expected output: 100
    
    return 0;
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