Here is the modified code:

```c++
#include <iostream>
using namespace std;

int gcd(int a, int b);

int main() {
    int a = 0;
    int b = 0;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;
    return 0;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}