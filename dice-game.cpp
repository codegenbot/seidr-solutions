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
    for(int i = 1; i <= m; i++) {
        double prob = (m - i + 1) * (n - m) / (double)(n*m);
        sum += prob;
        cout << setprecision(10) << fixed << prob << " ";
    }
    cout << endl;

    return 0;
}