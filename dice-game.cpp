#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)(n * m);
    double p = 0;

    for (int i = 0; i < m; i++) {
        p += (double)(n - (m - i)) / total;
    }

    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    double result = probability(n, m);
    cout << result << endl;
    return 0;
}