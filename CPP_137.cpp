#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    float num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    if (num1 > num2)
        cout << "Greater number is: " << num1 << endl;
    else
        cout << "Greater number is: " << num2 << endl;

    return 0;
}