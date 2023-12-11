#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    if (n > m) {
        cout << 0.0 << endl;
    } else if (n == m) {
        cout << 0.5 << endl;
    } else {
        double prob = ((double)n / (double)(m - n + 1));
        cout << prob << endl;
    }
}