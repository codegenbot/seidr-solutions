#include <vector>
#include <iostream>

using namespace std;

double getProbability(int n, int m) {
    double total = (double)n * m;
    return min(1.0, 1.0 / total);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << getProbability(n, m) << endl;
    return 0;
}