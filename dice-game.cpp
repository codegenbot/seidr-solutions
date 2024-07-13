#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;

    double sum = 0.0;
    
    // Calculate probability where Colin rolls i
    for(int i = 1; i <= m; i++) {
        double tempSum = 0.0;
        
        for(int j = i + 1; j <= n; j++) {
            tempSum += (1.0 / (double)m) * (1.0 / (double)n);
        }
        
        sum += tempSum;
    }

    cout << fixed << setprecision(10) << sum << endl;

    return 0;
}