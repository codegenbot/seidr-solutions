#include <iostream>
#include <string>

using namespace std;

int findGCD(int a, int b) {
    while (b != 0) {
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
    int GCD = findGCD(num1, num2);
    cout << "The GCD of the given numbers is: " << GCD << endl;
}