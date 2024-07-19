#include <iostream>
#include <string>

using namespace std;

string compareOne(string a, string b) {
    if (stof(a) > stof(b)) {
        return a;
    } else if (stof(a) < stof(b)) {
        return b;
    } else {
        return "None";
    }
}

int main() {
    string a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << compareOne(a, b) << endl;
    return 0;
}