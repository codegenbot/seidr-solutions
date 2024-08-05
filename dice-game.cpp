#include <vector>
using namespace std;

double game(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= min(n, m); i++) {
        total -= (i * 1.0 / max(n, m));
    }
    return total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(10) << game(n, m) << endl;
    return 0;
}