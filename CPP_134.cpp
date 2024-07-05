#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

using namespace std;

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty() || !isalpha(txt.back())) return false;
    size_t lastSpace = txt.find_last_of(' ');
    if (lastSpace == string::npos || lastSpace < txt.length() - 1) return true;
    return false;
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pie") == true);
    assert(check_if_last_char_is_a_letter("apple pie ") == false);
    assert(check_if_last_char_is_a_letter("apple") == true); 
    assert(check_if_last_char_is_a_letter("apple ") == false);
    cout << "All tests passed." << endl;
    return 0;
}