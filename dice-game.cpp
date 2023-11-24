#include <iostream>
using namespace std;

double probabilityPeterWins(int n, int m) {
    double totalOutcomes = n * m;
    double favorableOutcomes = 0;
    
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
    
    double probability = probabilityPeterWins(n, m);
    cout << probability << endl;
    
    return 0;
}