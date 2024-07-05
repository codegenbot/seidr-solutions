#include <iostream>
using namespace std;

bool is_simple_power(int x, int n) {
    if (n <= 1) return x == 1;
    if (x == 1) return true;
    while (x % n == 0) {
        x /= n;
    }
    return x == 1;
}

int main() {
    int x, n;
    cin >> x >> n;
    if (is_simple_power(x, n)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}