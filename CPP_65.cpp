```
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int circular_shift(int x, int shift) {
    string digits = to_string(x);
    if (shift > digits.length()) {
        return stoi(digits.substr(0, 1) + digits.substr(1, digits.length() - 1));
    } else {
        return stoi(digits.substr(shift, digits.length() - shift) + digits.substr(0, shift));
    }
}

int main() {
    int x = 0;
    int shift = 0;
    cin >> x >> shift;
    cout << circular_shift(x, shift) << endl;
    return 0;
}
```
Note: The `to_string()` and `stoi()` functions are used to convert between integers and strings.