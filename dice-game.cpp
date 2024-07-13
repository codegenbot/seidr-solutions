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
    for(int i = 1; i < m; i++) {
        double prob = (n - i) * (m - i) / (double)(n * m);
        sum += prob;
    }
    sum += (n - m) / (double)(n * m);
    cout << fixed << setprecision(10) << sum << endl;

    return 0;
}