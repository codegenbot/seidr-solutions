#include <iostream>

using namespace std;

double diceGame(int n, int m) {
    double p = 0.0;
    if(n > m)
        p += (n - m) / static_cast<double>(n * m);
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;
}