#include <vector>
using namespace std;

double probability(int n, int m) {
    double total = (long long)n * m;
    double higherThanColin = 0.0;
    
    for(int i = m + 1; i <= n; i++) {
        higherThanColin += (n - (i - m)) / (double)total;
    }
    
    return higherThanColin;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2) << probability(n, m);
    return 0;
}