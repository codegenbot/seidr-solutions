#include <iostream>
using namespace std;

#include <iomanip>

double probability(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        if(i > m)sum += (n - i + 1.0) / n;
    }
    return sum;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << probability(n, m) << endl;
    return 0;