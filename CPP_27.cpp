#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

using namespace std;

string flip_case(string str) {
    for (char &c : str) {
        if (islower(c)) {
            c = toupper(c);
        } else if (isupper(c)) {
            c = tolower(c);
        }
    }
    return str;
}