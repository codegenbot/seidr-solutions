#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    return 1 - ((m-1)/m) * (n-1)/n;
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