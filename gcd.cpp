#include <vector>
#include <string>
#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    cout << "GCD of 12 and 15 is: " << gcd(12, 15) << endl;
}