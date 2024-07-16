#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;
    
    for(int i = 1; i <= m; i++) {
        p += ((n - i) / (double)(n * m));
    }
    
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(2) << fixed << probability(n, m);
    return 0;
}