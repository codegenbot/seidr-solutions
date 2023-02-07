#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << n / 2 << endl;
    for (int i = 0; i < n / 2; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << n / 2 << endl;
    for (int i = n / 2; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
