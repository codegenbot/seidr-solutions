#include <iostream>
#include <iomanip>
using namespace std;

double probabilityOfPeterWinning(int n, int m) {
    double totalOutcomes = n * m;
    double peterOutcomes = n;

    return (peterOutcomes - 1) / totalOutcomes;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    double probability = probabilityOfPeterWinning(n, m);
    
    cout << fixed << setprecision(8) << probability << endl;
    
    return 0;
}