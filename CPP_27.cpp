#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string flip_case(string str);

string flip_case(string str){
    for (char &c : str) {
        if (islower(c)) {
            c = toupper(c);
        } else if (isupper(c)) {
            c = tolower(c);
        }
    }
    return str;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    assert(flip_case(input) == "eNTER A STRING: ");
    cout << flip_case(input) << endl;
    return 0;
}