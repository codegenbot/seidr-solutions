#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double count = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                count++;
            }
        }
    }
    return count / (double)(n * m);
}

int main() {
    int n, m;
    cout << "Enter the number of sides on Peter's die: ";
    cin >> n;
    cout << "Enter the number of sides on Colin's die: ";
    cin >> m;
    cout << fixed << setprecision(2) << diceGame(n, m);
    return 0;
}