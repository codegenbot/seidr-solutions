#include <iostream>
using namespace std;

double probabilityOfPeterWinning(int n, int m) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j) {
                count++;
            }
        }
    }
    return (double)count / (n * m);
}

int main() {
    int n, m;
    cin >> n >> m;
    double probability = probabilityOfPeterWinning(n, m);
    cout << probability << endl;
    return 0;
}