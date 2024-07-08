#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double prob = 0.0;
    for (int i = max(n - 1, 1); i <= min(m, n); i++) {
        prob += (m - i + 1) / (n * m);
    }
    return prob;
}

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;
    double result = diceGame(n, m);
    cout << "Probability: " << result << endl;
    return 0;
}