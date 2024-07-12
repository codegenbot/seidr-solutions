#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    double probability = 0.0;
    
    for (int i = 1; i <= n; ++i) {
        probability += (double)min(i-1, m) / (n * m);
    }
    
    cout << fixed << setprecision(8) << probability << endl;
    
    return 0;
}