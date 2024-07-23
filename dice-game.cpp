#include <vector>
using namespace std;

double probability(int n, int m) {
    double total = pow(n + m - 1, 2);
    double peterHigher = (n * m - min(n, m)) / total;
    return peterHigher;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << probability(n, m) << endl;
    return 0;
}