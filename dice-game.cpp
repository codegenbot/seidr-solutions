#include <iostream>
#include <iomanip>
using namespace std;

double probability(int n, int m) {
    return (m < n ? (double)(m) / n : 0);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(5) << probability(n, m) << endl;
    return 0;
}