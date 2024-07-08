#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double prob = 0.0;
    for (int i = 1; i <= m - 1; i++) { 
        for (int j = i + 1; j <= n; j++) { 
            prob += ((double)i / m) * ((double)(j-1) / n); 
        }
    }
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