#include <vector>
#include <string>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "The greatest common divisor of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
    
    return 0;
}