#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    double total_outcomes = n * m;
    double favorable_outcomes = 0;
    for (int i = 1; i <= n; ++i) {
        favorable_outcomes += (double)(i - 1) * (m) / total_outcomes;
    }
    double probability = favorable_outcomes;
    cout << fixed << probability << endl;
    return 0;
}