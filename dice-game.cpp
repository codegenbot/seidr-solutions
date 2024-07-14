#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double sum = 0;
    for (int i = n + 1; i <= m * n; i++) {
        sum += 1.0 / m;
    }
    return sum / (n * m);
}

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;
    double result = diceGame(n, m);
    cout << fixed << setprecision(2) << result << endl;
    return 0;
}