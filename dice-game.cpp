#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (long long)n * m;
    return (double)(n - 1) / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4);
    cout << probability(n, m) << endl;
    return 0;
}