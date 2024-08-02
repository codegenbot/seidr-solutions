#include <iostream>
#include <string>
#include <vector>

using namespace std;

any compare_one(any a, any b) {
    if (any_cast<double>(a) > any_cast<double>(b)) {
        return a;
    } else if (any_cast<double>(a) == any_cast<double>(b)) {
        return any("None");
    } else {
        return b;
    }
}

int main() {
    double num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    any a = any(num1);
    any b = any(num2);

    any result = compare_one(a, b);

    if (any_cast<string>(result) == "None") {
        cout << "The numbers are equal." << endl;
    } else {
        cout << "The greater number is: " << any_cast<double>(result) << endl;
    }

    return 0;
}