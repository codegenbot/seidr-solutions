#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double prob = 0.0;
    for (int i = 1; i <= min(n, m); i++) {
        if (i < m) { // Colin rolls lower than Peter
            prob += (1.0 / n) / (m + 1);
        } else if (i == m) { // Peter and Colin roll the same
            prob += 1.0 / n;
        }
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