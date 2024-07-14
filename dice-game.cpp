#include <vector>
using namespace std;

double probability(int n, int m) {
    if (n <= m)
        return 1.0 - (double)n / (n + m);
    else
        return (double)m / (n + m);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(10) << probability(n, m) << endl;
    return 0;
}