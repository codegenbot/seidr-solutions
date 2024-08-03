#include <vector>
#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)n * m;
    double favorable = 0;

    for (int i = 1; i <= m - 1; i++) {
        favorable += min(n, i);
    }

    return favorable / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << probability(n, m) << endl;
    return 0;
}