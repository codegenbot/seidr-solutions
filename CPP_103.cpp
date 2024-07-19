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
    string res = "";
    while (avg > 0) {
        if (avg >= 2) {
            res += "1";
            avg -= 2;
        } else {
            res += "0";
        }
        avg /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << rounded_avg(n, m) << endl;
    return 0;
}