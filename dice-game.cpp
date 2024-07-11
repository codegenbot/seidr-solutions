#include <iostream>
#include <iomanip>
using namespace std;

double probability(int n, int m);

int main() {
    int n, m;
    cin >> n >> m;
    double result = probability(n, m);
    cout << setprecision(2) << fixed << result << endl;
}

double probability(int n, int m) {
    if (n < m + 1)
        return 0.0;
    else
        return static_cast<double>(m + 1) / n;
}