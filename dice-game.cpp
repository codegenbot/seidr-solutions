#include <iostream>
#include <iomanip>

using namespace std;

double diceGame(int n, int m) {
    double total = (double)n * m;
    double count = 0.0;
    for(int i = 1; i <= n - 1; i++) {
        count += (n-i)*m/n/m;
    }
    return count;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;
}