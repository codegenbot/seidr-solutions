#include <iostream>
using namespace std;

double getProbability(int n, int m) {
    if(n <= m)
        return 1.0 - (n * 1.0 / (m + m));
    else
        return n * 1.0 / (m + m);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << getProbability(n, m) << endl;
    return 0;
}