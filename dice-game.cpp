#include <vector>
#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double numerator = 0;
    double denominator = 1;

    for (int i = 1; i <= m; i++) {
        numerator += (n - i);
        denominator += n;
    }

    return numerator / denominator;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << diceGame(n, m) << endl;
    return 0;
}