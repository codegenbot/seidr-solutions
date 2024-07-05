#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

using namespace std;

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty() || !isalpha(txt.back())) return false;
    size_t lastSpace = txt.find_last_of(' ');
    if (lastSpace == string::npos) return true;
    return isalpha(txt.back());
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pie") == true);
    assert(check_if_last_char_is_a_letter("apple pie ") == false);
    assert(check_if_last_char_is_a_letter("apple pie a") == true);
    assert(check_if_last_char_is_a_letter("apple pie 1") == false);
    return 0;
}