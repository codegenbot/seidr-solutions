#include <iostream>
#include <string>
#include <cassert>
using namespace std;

bool check_if_last_char_is_a_letter(const string& txt) {
    if(txt.empty())
        return false;
    char lastChar = txt.back();
    if(isalpha(lastChar) && txt.find_last_not_of(" ") == txt.length() - 1)
        return true;
    return false;
}