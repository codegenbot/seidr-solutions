#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string flip_case(string str) {
    for (int i = 0; i < str.length(); ++i) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
    return str;
}

int main() {
    cout << "Enter a string: ";
    string input;
    getline(cin, input);
    cout << "Flipped case: " << flip_case(input) << endl;
    return 0;
}