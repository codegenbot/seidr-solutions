#include <vector>
using namespace std;

double probability(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= min(n, m); i++) {
        total -= 1.0 / max(n, m);
    }
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(1) << probability(n, m) << endl;
    return 0;
}