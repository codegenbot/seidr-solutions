Here is the completed code:

#include <vector>
using namespace std;

double getProbability(int n, int m) {
    double total = (long long)n * m;
    return 1.0 - (double)(n - 1) / total;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(10) << getProbability(n, m) << endl;
    return 0;
}