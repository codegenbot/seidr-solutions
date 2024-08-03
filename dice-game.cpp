#include <vector>
using namespace std;

double getProbability(int n, int m) {
    double total = 1.0;
    for (int i = 1; i <= m; i++) {
        total += pow((n - i), 1.0);
    }
    return total / (pow(n, 1.0));
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << setprecision(5) << getProbability(n, m) << endl;
    return 0;
}