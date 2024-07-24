#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)n * m;
    double higher = 0;
    
    for (int i = n; i <= m; i++) {
        higher += (double)(m - i + 1) / total;
    }
    
    return higher;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << probability(n, m) << endl;
    return 0;
}