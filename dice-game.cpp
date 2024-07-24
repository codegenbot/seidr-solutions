#include <iostream>
using namespace std;

double probability(int n, int m) {
    double count = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i > j)
                count++;
            else
                break;
        }
    }
    return count / (n * m);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << probability(n, m) << endl;
    return 0;
}