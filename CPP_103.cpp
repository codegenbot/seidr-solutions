```cpp
#include <iostream>
#include <algorithm>
#include <cmath> 
using namespace std;

string intToBinary(int n) {
    string res = "";
    while (n > 0) {
        if ((n & 1) == 1) res += '1';
        else res += '0';
        n /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}

string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    double sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = round((double)sum / (m - n + 1)); 
    return intToBinary((int)avg);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << rounded_avg(n, m);
}