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
    
    // Calculate probability where Colin rolls 1
    for(int i = 1; i <= m; i++) {
        if(i == 1) { 
            for(int j = 2; j <= n; j++) {
                sum += (1.0 / (double)m) * (1.0 / (double)n);
            }
        } else { 
            for(int j = m + 1; j <= n; j++) {
                sum += (1.0 / (double)m) * (1.0 / (double)n);
            }
        }
    }

    cout << fixed << setprecision(10) << sum << endl;

    return 0;
}