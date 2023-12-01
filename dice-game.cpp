#include <iostream>
#include <iomanip>
using namespace std;

long double probabilityOfPeterWinning(int n, int m) {
    long double totalOutcomes = n * m;
    long double favorableOutcomes = 0;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                favorableOutcomes++;
            }
        }
    }
    
    return favorableOutcomes / totalOutcomes;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    long double probability = probabilityOfPeterWinning(n, m);
    cout << fixed << setprecision(8) << probability << endl;
    
    return 0;
}