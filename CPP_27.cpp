#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string flip_case(string str) {
    for (char &c : str) {
        if (isupper(c))
            c = tolower(c);
        else if (islower(c))
            c = toupper(c);
    }
    return str;
}

int main() {
    string input;
    getline(cin, input);
    cout << flip_case(input) << endl;
    return 0;
}