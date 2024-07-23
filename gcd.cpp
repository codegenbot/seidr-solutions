```cpp
#include <vector>
#include <string>

using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << endl;
    return 0;
}