#include <iostream>

using namespace std;

string rounded_avg(int n, int m) {
    if (n > m) return "-1";
    long sum = 0;
    for (int i = n; i <= m; i++) {
        sum += i;
    }
    double avg = (double)sum / ((long)(m - n + 1));
    int rounded_avg = floor(avg);
    string binary = "";
    while (rounded_avg > 0) {
        if (rounded_avg & 1) binary.push_back('1');
        else binary.push_back('0');
        rounded_avg >>= 1;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

int main() {
    int n, m;
    cout << "Enter two numbers: ";
    cin >> n >> m;
    cout << "Result: " << rounded_avg(n, m) << endl;
    return 0;
}