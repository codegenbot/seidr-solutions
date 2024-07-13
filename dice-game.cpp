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
    
    // Calculate probability where Colin rolls 1 to m-1
    for(int i = 1; i < m; i++) {
        double colinWays = 1.0;
        for(int j = 1; j <= i; j++) {
            colinWays /= (double)m;
        }
        
        double peterWays = 0.0;
        for(int j = i + 1; j <= n; j++) {
            peterWays += 1.0 / (double)(n - j + 1);
        }
        
        sum += colinWays * peterWays;
    }

    cout << fixed << setprecision(10) << sum << endl;

    return 0;
}