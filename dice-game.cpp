#include <iostream>
#include <iomanip>
using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double p = ((m-1)*(n-m)) / (total);
    
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << diceGame(n, m) << endl;
    return 0;
}