#include <iostream>
#include <iomanip>
using namespace std;

double probability(int n, int m) {
    double p = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                p += 1.0 / (n * m);
            }
        }
    }
    return p;
}

int main() {
    int n, m;
    cin >> n >> m; 
    cout << fixed << setprecision(6) << probability(n, m); 
    return 0;
}