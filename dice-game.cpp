#include <iostream>
using namespace std;

double getProbability(int n, int m) {
    return (double)(m-1) / (n*m);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6) << getProbability(n, m) << endl;
    return 0;
}