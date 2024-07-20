#include <vector>
using namespace std;

double getProbability(int n, int m) {
    double totalPossibilities = (double)n * m;
    double peterWins = 0.0;

    for (int i = m + 1; i <= n; i++) {
        peterWins += (double)i / totalPossibilities;
    }

    return peterWins;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << getProbability(n, m);
    return 0;
}