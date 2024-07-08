#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double prob = 0.0;
    // Calculate probability that Peter rolls higher or equal to Colin
    for (int i = 1; i <= m; i++) {
        prob += (1.0 * min(n - 1, i-1) / n);
    }
    // Subtract the probability that they roll equal
    return 1 - prob;
}

int main() {
    int n, m;
    cout << "Enter the number of sides for Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides for Colin's die: ";
    cin >> m;
    double result = diceGame(n, m);
    cout << "Probability: " << std::to_string(double(result)) << endl;
    return 0;
}