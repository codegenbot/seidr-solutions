#include <iostream>
using namespace std;

double game(int n, int m) {
    double probability = 0;
    for (int i = m + 1; i <= n; ++i) {
        probability += (n - i + 1.0) / (n * m);
    }
    return probability;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(10) << game(n, m) << endl;
    return 0;
}