#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)n * m;
    return (n - m) / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << probability(n, m) << endl;
    return 0;
}