```cpp
#include <iostream>
#include <string>
#include <cmath> 
using namespace std;

string rounded_avg(int n, int m) {
    if (n > m) return "-" + rounded_avg(n, m);
    double sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = round((double)sum / (m - n + 1)); 
    while(avg > 0.5) {
        string res = (int)avg & 1 ? "1" : "0";
        avg /= 2;
    }
    return to_string(avg);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << rounded_avg(n, m);
}