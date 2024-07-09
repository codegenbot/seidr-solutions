```cpp
#include <vector>
#include <string>

using namespace std;

int main() {
    int a, b;
    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;
    cout << "GCD of these two integers is: " << gcd(a, b) << endl;

    return 0;
}

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}