#include <iostream>
using namespace std;

double probability(int n, int m) {
    if (n <= m)
        return 0;
    else
        return 1.0 * (m + 1) / (double)(n);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << probability(n, m) << endl;
    return 0;
}