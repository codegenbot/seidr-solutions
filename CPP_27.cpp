#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main_function() {
    string input;
    cout << "Enter a string: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, input);
    cout << flip_case(input) << '\n';
    if(flip_case(input).compare("these violent delights have violent ends") == 0)
        return 0;
    else
        return 1;
}

string flip_case(const string& str) {
    string result = "";
    for (char c : str) {
        if (isupper(c))
            result += tolower(c);
        else if (islower(c))
            result += toupper(c);
        else
            result += c;
    }
    return result;
}