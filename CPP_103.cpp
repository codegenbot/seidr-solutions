```cpp
#include <iostream>
#include <string>
#include <cmath> 
using namespace std;

string rounded_avg(int n, int m) {
    string res = ""; // declare locally
    if (n > m) return "-" + rounded_avg(n, m);
    double sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = round((double)sum / (m - n + 1)); 
    while(avg > 0.5) {
        res = (int)avg & 1 ? res + "1" : res + "0";
        avg /= 2;
    }
    return res;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << rounded_avg(n, m);
}