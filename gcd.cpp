```cpp
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a%b);
}

int main() {
    int a = 0, b = 0;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    string strA = to_string(a);
    string strB = to_string(b);
    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;
    return 0;
}