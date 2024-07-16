```cpp
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    cout << fixed << setprecision(6);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < m && j < i; j++) {
            cout << char(j + '0');
        }
        cout << endl;
    }
    return 0;
}