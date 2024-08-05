Here is the solution:

#include <vector>
using namespace std;

double probability(int n, int m) {
    return (m - 1.0) / (n + m - 2);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << probability(n, m) << endl;
    return 0;
}