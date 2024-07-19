#include <iostream>
#include <cmath>
#include <string>
using namespace std;

double rounded_avg(int n, int m) {
    if (n > m) return -1.0;
    double sum = 0.0;
    for (int i = n; i <= m; i++) {
        ostringstream oss;
        oss << i;
        string s = oss.str();
        sum += stod(s); 
    }
    double avg = round((sum / (m - n + 1)) * 2) / 2.0;
    return avg;
}

int main() {
    int n, m;
    cout << "Enter the range: ";
    cin >> n >> m;
    cout << "The average is: " << rounded_avg(n, m);
    return 0;
}