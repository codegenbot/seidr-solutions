#include <iostream>
#include <string>
using namespace std;

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    char lastChar = txt[txt.size() - 1];
    return isalpha(lastChar) && !isspace(lastChar);
}