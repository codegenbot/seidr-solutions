```cpp
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {
    cout << "GCD of 12 and 15 is: " << gcd(12, 15) << endl;
}