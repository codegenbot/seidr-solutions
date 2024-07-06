#include <iostream>
#include <string>
using namespace std;

std::string flip_case(std::string str) {
    string result = "";
    for (char c : str) {
        if (isupper(c)) {
            result += tolower(c);
        } else if (islower(c)) {
            result += toupper(c);
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a sentence: ";
    cin >> input;
    cout << "Flipped case: " << flip_case(input) << endl;
    return 0;
}