```
#include <iostream>
#include <cmath>
using namespace std;

bool any_int(float a, float b, float c) {
    return (a == b || a == c || b == c);
}

int main() {
    float a, b, c;
    cin >> a >> b >> c;
    if (any_int(a, b, c)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}
```