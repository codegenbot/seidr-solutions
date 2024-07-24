#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)n * m;
    double higher = 0;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i && j <= m; j++) {
            higher += 1.0;
        }
    }
    
    return higher / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << probability(n, m) << endl;
    return 0;
}