#include <iostream>
#include <iomanip>
using namespace std;

double probability(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= min(n, m); i++) {
        sum += (n - i + 1.0) / n * (m - i + 1);
    }
    return sum;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << probability(n, m) << endl;
    return 0;
}