#include <vector>
#include <iostream>

using namespace std;

double probability(int n, int m) {
    double total = (long long)n * m;
    double p = 0;
    
    for (int i = 1; i <= n - 1; ++i)
        p += (n - i) / total;
    
    return p;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4);
    cout << probability(n, m) << endl;
    return 0;
}