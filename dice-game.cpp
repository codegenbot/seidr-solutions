#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)n * m;
    double success = (n - 1) * m + n * (m - 1);
    return success / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << probability(n, m) << endl;
    return 0;
}