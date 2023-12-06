```
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int change_base(int x, int base) {
    if (base == 10) return x;
    else return bin(x)[2:].zfill(len(str(x)));
}
int main() {
    int x, base;
    cin >> x >> base;
    cout << change_base(x, base);
    return 0;
}
```