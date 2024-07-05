#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

using namespace std;

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty() || !isalpha(txt.back())) return false;
    txt.erase(txt.find_last_not_of(' ') + 1);
    return isalpha(txt.back());
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pie") == true);
    assert(check_if_last_char_is_a_letter("apple pie ") == true);
    assert(check_if_last_char_is_a_letter("apple pie  ") == true);
    assert(check_if_last_char_is_a_letter(" ") == false);
    assert(check_if_last_char_is_a_letter("") == false);
    assert(check_if_last_char_is_a_letter("apple") == true);
    assert(check_if_last_char_is_a_letter("a") == true);
    assert(check_if_last_char_is_a_letter(" a") == true);
    return 0;
}