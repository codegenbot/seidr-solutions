#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)(n * m);
    double p = 0;

    for (int i = 1; i <= min(m, n); i++) { 
        if(i > m) p += (double)((n - i)) / total;
    }

    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    double result = probability(n, m);
    cout << fixed << setprecision(8) << result << endl; 
    return 0;
}