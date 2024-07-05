#include <iostream>
#include <string>
using namespace std;

int my_strlen(string str) {
    return str.length();
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << "Length of the string is: " << my_strlen(input) << endl;
    return 0;
}