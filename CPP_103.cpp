#include <iostream>
using namespace std;

string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    double sum = 0;
    for (int i = n; i <= m; ++i) {
        sum += i;
    }
    double avg = round(sum / (m - n + 1));
    string bin = "";
    while (avg > 0) {
        if (avg >= 2) {
            avg /= 2;
            bin.push_back('1');
        } else if (avg == 1) {
            avg = 0;
            bin.push_back('1');
        } else {
            avg /= 2;
            bin.push_back('0');
        }
    }
    reverse(bin.begin(), bin.end());
    return bin;
}

int main() {
    int n, m;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of m: ";
    cin >> m;
    cout << rounded_avg(n, m) << endl;
    return 0;
}