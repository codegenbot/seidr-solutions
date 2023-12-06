```
#include <iostream>
using namespace std;

int circular_shift(int x, int shift) {
    if (shift > 0) {
        int digits = x % 10;
        return (x / 10) + (digits * pow(10, shift - 1));
    } else {
        return x;
    }
}

int main() {
    int x, shift;
    cin >> x >> shift;
    cout << circular_shift(x, shift) << endl;
    return 0;
}
```