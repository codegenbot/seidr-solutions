#include <vector>
using namespace std;

double game(int n, int m) {
    double total = (double)n * m;
    double peterWins = 0;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < m && j != i; ++j) {
            peterWins += 1.0 / total;
        }
    }

    return peterWins;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(10) << game(n, m);
    return 0;
}