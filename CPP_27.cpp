#include <iostream>
#include <string>
using namespace std;

string flip_case(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
        if (islower(str[i])) {
            result += toupper(str[i]);
        } else {
            result += tolower(str[i]);
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << "Flipped case: " << flip_case(input) << endl;
    return 0;
}