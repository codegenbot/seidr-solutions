#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    double ans = (min(n, m) - 1.0) / (2 * max(n, m));
    cout << ans << endl;
    return 0;
}