#include <assert.h>
#include <cctype>
#include <iostream>
using namespace std;

bool check_if_last_char_is_a_letter(string txt) {
    if(txt.length() > 0)
        return isalpha(txt.back());
    else
        return false;
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == true); 
    cout << "Check if the last character of a string is a letter: ";
    string txt;
    cin >> txt;
    if (check_if_last_char_is_a_letter(txt))
        cout << "The last character of the input string is a letter.\n";
    else
        cout << "The last character of the input string is not a letter.\n";
    return 0;
}