```cpp
#include <iostream>
#include <string>
#include <cmath> 
using namespace std;

string res = "";

string rounded_avg(int n, int m) {
    string result = "";
    if (n > m) return "-" + rounded_avg(n, m);
    double sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = round((double)sum / (m - n + 1)); 
    while(avg > 0.5) {
        result = (int)avg & 1 ? result + "1" : result + "0";
        avg /= 2;
    }
    return result;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << rounded_avg(n, m);
}