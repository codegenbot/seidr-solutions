#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)n * m;
    double p = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < m && j < i; j++) {
            p += (i > j) ? 1.0 / total : 0.0;
        }
    }

    return p;
}

int main() {
    int n = 6; 
    int m = 6; 
    double result = probability(n, m);
    cout << "Probability: " << result << endl;
    return 0;
}