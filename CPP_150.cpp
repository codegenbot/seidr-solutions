#include<iostream>
using namespace std;

int x_or_y(int n, int x, int y) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return y;
    }
    return x;
}

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    cout << x_or_y(n, x, y) << endl;
    return 0;
}