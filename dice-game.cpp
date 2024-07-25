#include <iostream>
using namespace std;

double probability(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= m; i++) {
        sum += (n - i) / (double)(n * m);
    }
    return sum;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << probability(n, m) << endl;
    return 0;
}