#include <vector>
#include <iostream>

using namespace std;

double diceGame(int n, int m) {
    double sum = 1.0;
    for (int i = 1; i < n; ++i) {
        sum += pow(m, i);
    }
    return sum / pow(n + m - 1, m);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(10) << diceGame(n, m) << endl;
    return 0;
}