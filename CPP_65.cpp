```
#include <iostream>
#include <cassert>
using namespace std;

int main() {
    int x = 123;
    int shift = 5;
    int result = circular_shift(x, shift);
    cout << "The circularly shifted number is: " << result << endl;
    return 0;
}

int circular_shift(int x, int shift) {
    if (shift > 10 || shift < -10) {
        cout << "Invalid shift amount. Shift amount must be between 1 and 9." << endl;
        return -1;
    }
    // Code to perform circular shift here
}
```