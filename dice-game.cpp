#include <iostream>
#include <iomanip>

using namespace std;

double diceGame(int n, int m) {
    double total = (n * m);
    int high = n - 1;
    double probability = (double)high / total;
    return probability;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << diceGame(n, m) << endl;
    return 0;
}