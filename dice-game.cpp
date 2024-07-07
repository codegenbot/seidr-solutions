#include <iostream>
#include <iomanip>
using namespace std;

double probability(int n, int m) {
    double strict = 0;
    double equal = 0;
    
    for (int i = m + 1; i <= n; i++) {
        strict += (n - i + 1.0) / n;
    }
    
    for (int i = 1; i <= m && i < n; i++) {
        equal += (m - i + 1.0) / m;
    }
    
    return strict + equal;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << probability(n, m) << endl;
    return 0;
}