#include <vector>
using namespace std;

double probability(int n, int m) {
    double total = pow(n + m - 1, 2);
    double peter = pow(n, 2);
    double colin = pow(m, 2);
    return (peter - colin) / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << probability(n, m) << endl;
    return 0;
}