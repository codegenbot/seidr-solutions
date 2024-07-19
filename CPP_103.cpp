```
#include <string>
#include <iostream>
#include <algorithm>
#include <cmath> 
using namespace std;

string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    double sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = round((double)sum / (m - n + 1)); 
    string res = "";
    while (avg > 0) {
        if ((int)avg & 1) res += '1';
        else res += '0';
        avg /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << rounded_avg(n, m);
    return 0;
}