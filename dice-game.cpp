#include <iostream>
using namespace std;

double findProbability(int n, int m) {
    double numerator = 0;
    for (int i = m + 1; i <= n; i++) {
        numerator += 1.0 / m;
    }
    
    double denominator = (double)(n * m);
    
    return numerator / denominator;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << findProbability(n, m) << endl;
    return 0;
}