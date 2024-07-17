#include <iostream>
using namespace std;

double game(int n, int m) {
    if (n == 1)
        return 0;
    if (m == 1)
        return 1;
    return (double)(m - 1) / (n + m - 2);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(4) << game(n, m) << endl;
    return 0;
}