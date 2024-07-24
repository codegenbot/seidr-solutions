#include <iostream>
using namespace std;

double probability(int n, int m) {
    return (n - 1.0) / (n + m - 2);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << probability(n, m) << endl;
    return 0;
}