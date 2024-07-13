#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)n * m;
    double p = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < m && j < i; j++) {
            p += 1.0 / total;
        }
        if(i > m) break;
    }

    return p;
}

int main() {
    int n = 51; 
    int m = 92; 
    double result = probability(n, m);
    cout << result << endl;
    return 0;
}