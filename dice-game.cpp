#include <vector>
using namespace std;

double probability(int n, int m) {
    double total = pow(n + m - 1, 2);
    return (n - m) / (total * 1.0);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << probability(n, m) << endl;
    return 0;
}