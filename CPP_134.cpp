#include <iostream>
using namespace std;

bool check_if_last_char_is_a_letter(string str);

int main() {
    string s = "apple pi e ";
    bool result = check_if_last_char_is_a_letter(s);
    if (result == true) {
        cout << "Last character of the string is a letter." << endl;
    } else {
        cout << "Last character of the string is not a letter." << endl;
    }
    return 0;
}

bool check_if_last_char_is_a_letter(string str) {
    char lastChar = str.back();
    if (isalpha(lastChar)) { 
        return true;
    } else {
        return false;
    }
}