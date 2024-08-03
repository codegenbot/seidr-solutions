#include <vector>
using namespace std;

double getProbability(int n, int m) {
    double total = pow(n + m, 2);
    double peterWins = (n * m) - ((n / (n + m)) * (n * m));
    return 2.0 * peterWins / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << getProbability(n, m) << endl;
    return 0;
}