#include <iostream>
using namespace std;

long double probabilityOfHigherRoll(int n, int m) {
    long double probability = 0.0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                probability += 1.0 / (n * m);
            }
        }
    }
    return probability;
}

int main() {
    int n, m;
    cin >> n >> m;
    long double result = probabilityOfHigherRoll(n, m);
    cout << fixed << result << endl;
    return 0;
}