```c++
#include <iostream>
#include <vector>
#include <string>

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
    int a = 71065;
    int b = 426691; 
    cout << "GCD: " << gcd(a, b) << endl;

    return 0;
}