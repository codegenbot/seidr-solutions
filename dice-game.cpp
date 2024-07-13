#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)(n * m);
    double p = 0;

    for (int i = 1; i <= m; i++) {
        if(i < n) p += (double)(1) / total;
    }

    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    double result = probability(n, m);
    cout << fixed << setprecision(6) << result << endl; 
    return 0;
}