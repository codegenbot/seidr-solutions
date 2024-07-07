#include <iostream>
#include <iomanip>

using namespace std;

double probability(int n, int m) {
    double total = (double)n * m;
    double higher = 0;

    for(int i = 1; i < m; i++) {
        higher += (double)(n - i) / total;
    }

    return higher;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << probability(n, m) << endl;
    return 0;
}