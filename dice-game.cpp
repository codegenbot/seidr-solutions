#include <iostream>
#include <iomanip>
using namespace std;

double probability(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= m; i++) {
        double prob = (n - i + 1.0) / n; // Probability Peter rolls higher than Colin's roll `i`
        sum += prob;
    }
    return sum;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << probability(n, m) << endl;
    return 0;
}