#include <vector>
using namespace std;

double diceGame(int n, int m) {
    double total = (long long)n * m;
    double probability = 0.0;

    for (int i = 1; i <= m; i++) {
        probability += (double)(n - i + 1) / total;
    }

    return probability;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << diceGame(n, m) << endl;
    return 0;
}