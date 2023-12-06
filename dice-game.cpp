#include <iostream>
#include <cmath>
using namespace std;
double getProbability(int n, int m) {
    double probability = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                probability += 1.0 / ((double) n * m);
            }
        }
    }
    return probability;
}
int main() {
    int n, m;
    cin >> n >> m;
    cout << getProbability(n, m) << endl;
    return 0;
}