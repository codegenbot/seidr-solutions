```cpp
#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double prob = 0.0;
    for (int i = 1; i <= min(n, m); i++) {
        if (n > m) prob += (1.0 / n);
        else if (i < m) prob += (1.0 / m);
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
    cout << "Probability: " << std::to_string(double(result)) << endl;
    return 0;
}