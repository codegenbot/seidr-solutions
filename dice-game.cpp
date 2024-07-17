#include <iostream>
using namespace std;

double getProbability(int n, int m) {
    if(n == 1 || m == 1)
        return 0.0;
    
    double total = (double)n * m;
    double probability = 0.0;

    for(int i = 2; i <= n && i < m; i++)
        probability += (double)(n - i + 1) / total;

    if(m > n)
        return 1.0 - probability;

    return probability;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << getProbability(n, m);
    return 0;
}