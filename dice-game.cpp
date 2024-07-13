#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;

    double sum = 0.0;
    for(int i = 1; i <= m && i < n; i++) {
        double prob = (n - i) * (m - (i-1)) / (double)(n * m);
        sum += prob;
    }
    sum += (n > m) ? (1.0 - ((double)m)/n) : 0;
    cout << fixed << setprecision(10) << sum << endl;

    return 0;
}