#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    long double total_outcomes = static_cast<long double>(n * m);
    long double favorable_outcomes = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < i && j <= m; ++j) {
            favorable_outcomes += 1;
        }
    }
    long double probability = favorable_outcomes / total_outcomes;
    cout << fixed << probability << endl;
    return 0;
}