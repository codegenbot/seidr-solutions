```
#include <iostream>
#include <cmath>
using namespace std;

int multiply(int a, int b) {
    return abs(a % 10) * abs(b % 10);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << multiply(a, b) << endl;
    return 0;
}
```