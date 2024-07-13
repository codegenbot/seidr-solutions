#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)(n * m);
    double p = 0;

    for (int i = 1; i < m; i++) {
        p += (double)(n - i) / total;
    }
    p += (double)1 / total;  // probability of equal rolls or Colin higher

    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    double result = probability(n, m);
    cout << result << endl;
    return 0;
}