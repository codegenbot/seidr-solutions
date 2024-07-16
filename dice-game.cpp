#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;
    
    for(int i = 1; i <= m; i++) {
        if(i == 1) p += ((n - i) + 1) / total; // adjust the condition
        else p += (n - i) / total;
    }
    
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << probability(n, m);
    return 0;
}