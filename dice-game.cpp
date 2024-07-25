#include <iostream>
using namespace std;

double probability(int n, int m) {
    return (n-1)/(n*m*1.0);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << probability(n,m) << endl;
    return 0;
}