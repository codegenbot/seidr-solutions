#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    double prob = 0.0;
    for (int i = 1; i <= n; i++) {
        prob += (double)(n - i) / n * (double)m / (m + n);
    }
    
    cout << fixed << setprecision(2) << prob << endl;
    
    return 0;
}