#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

using namespace std;

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty() || !isalpha(txt.back())) return false;
    size_t last_space = txt.find_last_of(' ');
    return (last_space == string::npos || last_space == txt.size() - 2);
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pie ") == false);
    assert(check_if_last_char_is_a_letter("apple pie") == true);
    return 0;
}