#include <iostream>
#include <string>

using namespace std;

string compare_one(string a, string b) {
    if (a > b)
        return "First number is greater";
    else if (a == b)
        return "Numbers are equal";
    else
        return "Second number is greater";
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