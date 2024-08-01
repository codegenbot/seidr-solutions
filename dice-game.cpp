#include <iostream>
using namespace std;

double probability(int n, int m) {
    double sum = 0;
    for (int i = n + 1; i <= m * 2; i++) {
        sum += 1.0 / min(n, m);
    }
    return sum / max(n, m);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(10) << probability(n, m) << endl;
    return 0;
}