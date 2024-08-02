#include <iostream>
#include <string>

using namespace std;

string compareOne(string a, string b) {
    if (a > b)
        return a;
    else if (a < b)
        return b;
    else
        return "None";
}

int main() {
    string a, b;
    cout << "Enter first string: ";
    cin >> a;
    cout << "Enter second string: ";
    cin >> b;
    cout << compareOne(a, b) << endl;
    return 0;
}