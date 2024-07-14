#include <vector>
using namespace std;

double probability(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= m; ++i) {
        sum += 1.0 / m;
    }
    return (n - m) * sum;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(2);
    cout << probability(n, m) << endl;
    return 0;
}