#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    double total_outcomes = n * m;
    double favorable_outcomes = 0;
    for (int i = 1; i <= n; ++i) {
        favorable_outcomes += (double)i * (m - 1) / total_outcomes;
    }
    cout << fixed << favorable_outcomes << endl;
    return 0;
}