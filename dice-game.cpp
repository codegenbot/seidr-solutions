#include <iostream>
using namespace std;

double getProbability(int n, int m) {
    double total = 1.0;
    double p = 1.0 / n;
    double q = 1.0 / m;
    
    for (int i = 1; i <= min(n, m); i++) {
        total -= p * q;
    }
    
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << getProbability(n, m) << endl;
    return 0;
}