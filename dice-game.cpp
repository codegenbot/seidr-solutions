#include <iostream>
using namespace std;

double probability(int n, int m) {
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
    double result = probability(n, m);
    cout << result << endl;

    return 0;
}