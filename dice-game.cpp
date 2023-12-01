#include <iostream>

using namespace std;

double diceGame(int n, int m) {
    if (n >= m) {
        return 0.5;
    } else {
        return (double)n / (n + m);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << diceGame(n, m) << endl;
    return 0;
}