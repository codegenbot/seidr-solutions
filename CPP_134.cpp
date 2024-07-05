#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    // Remove trailing spaces
    size_t end = txt.find_last_not_of(' ');
    if (end == string::npos) return false; // string is all spaces
    return isalpha(txt[end]);
}

int main() {
    cout << boolalpha; // for printing boolean values as true/false
    cout << check_if_last_char_is_a_letter("apple pie ") << endl; // false
    cout << check_if_last_char_is_a_letter("apple pie") << endl; // true
    cout << check_if_last_char_is_a_letter(" ") << endl; // false
    return 0;
}