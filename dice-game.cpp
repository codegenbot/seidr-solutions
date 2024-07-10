#include <iostream>
using namespace std;

double probability(int n, int m) {
    return (double)(n - 1) / (n * m);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << probability(n, m) << endl;
    return 0;
}