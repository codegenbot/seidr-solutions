#include <iostream>
#include <string>

using namespace std;

string compareOne(string a, string b) {
    if (a == "None" || b == "None")
        return "None";

    double num1 = stod(a);
    double num2 = stod(b);

    if (num1 > num2)
        return a;
    else if (num1 < num2)
        return b;
    else
        return "None";
}

int main() {
    string a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    string result = compareOne(a, b);

    if (result == "None")
        cout << "Numbers are equal." << endl;
    else
        cout << "The bigger one is: " << result << endl;

    return 0;
}