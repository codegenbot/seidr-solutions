#include <iostream>
#include <string>

using namespace std;

string compare_one(string a, string b) {
    if (a == "None" || b == "None")
        return a;

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
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << compare_one(a, b) << endl;
    return 0;
}