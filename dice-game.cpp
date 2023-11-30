#include <iostream>
#include <iomanip>
using namespace std;

double probabilityOfHigherRoll(int n, int m) {
    double probability = 0.0;
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
    double result = probabilityOfHigherRoll(n, m);
    cout << fixed << setprecision(8) << result << endl;
    return 0;
}