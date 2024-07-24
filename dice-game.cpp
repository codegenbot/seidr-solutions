#include <iostream>
using namespace std;

double getProbability(int n, int m) {
    double total = (double)n * m;
    double success = 0.0;
    
    for(int i = m + 1; i <= n; i++) {
        success += (double)i / total;
    }
    
    return success;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << getProbability(n, m) << endl;
    return 0;
}