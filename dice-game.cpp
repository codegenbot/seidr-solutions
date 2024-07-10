#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    double result = probability(n, m);
    cout << "Result: " << result << endl;

    return 0;
}

double probability(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;

    for (int i = 1; i < m; i++) {
        p += (n - i) / (double)(n * m);
    }

    return p;
}