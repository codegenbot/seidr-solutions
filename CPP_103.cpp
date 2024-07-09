```cpp
#include <bits/stdc++.h>
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
            avg++;
        }
    }
    return res;
}

int main() {
    int n, m;
    cout << "Enter the values of n and m: ";
    cin >> n >> m;
    string result = rounded_avg(n, m);
    if (result == "-1") {
        cout << "Invalid input." << endl;
    } else {
        cout << "The rounded average is: " << result << endl;
    }
    return 0;
}