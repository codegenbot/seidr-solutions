#include <iostream>
using namespace std;

double probability(int n, int m);

int main() {
    int n, m;
    cin >> n >> m;
    double result = probability(n, m);
    cout << fixed << setprecision(2) << result << endl;
}

double probability(int n, int m) {
    if (n < m)
        return 0.0;
    else
        return static_cast<double>(m + 1) / n;
}