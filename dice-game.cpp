#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total_outcomes = n * m;
    double favorable_outcomes = (n - 1) * (m - min(n, m));
    return favorable_outcomes / total_outcomes;
}

int main() {
    int n, m;
    cin >> n >> m;
    double result = probability(n, m);
    cout << result << endl;
    return 0;
}