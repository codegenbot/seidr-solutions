#include <iostream>
#include <string>
#include <cmath> 
using namespace std;

int rounded_avg(int n, int m) {
    if (n > m) return -1;
    string str;
    for (int i = n; i <= m; i++) {
        str += to_string(i);
    }
    double avg = round((double)stod(str.c_str()) / (m - n + 1)); 
    while(avg > 0.5) {
        avg /= 2;
    }
    return (int)avg;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << rounded_avg(n, m) << endl;
}