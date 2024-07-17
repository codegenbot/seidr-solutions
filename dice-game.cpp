#include <iostream>
using namespace std;

double probability(int n, int m) {
    return (m - 1.0) / n;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << probability(n, m) << endl;
    return 0;
}