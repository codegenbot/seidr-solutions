#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int getProbability(int n, int m) {
    double probability = 0.0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i > j) {
                probability += (1.0 / (n * m));
            }
        }
    }
    return probability;
}
int main() {
    int n, m;
    cin >> n >> m;
    double result = getProbability(n, m);
    cout << fixed << setprecision(2) << result << endl;
    return 0;
}
