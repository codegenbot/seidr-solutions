#include <string>
#include <cctype>
#include <cassert>

using namespace std;

bool check_if_last_char_is_a_letter(const string &txt) {
    if (txt.empty() || txt.back() == ' ') return false;
    if (!isalpha(txt.back())) return false;
    size_t last_space = txt.find_last_of(' ');
    return last_space == string::npos || last_space == txt.size() - 2;
}

int main() {
    // Test cases
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);
    assert(check_if_last_char_is_a_letter("apple pie") == true);
    assert(check_if_last_char_is_a_letter("apple ") == false);
    assert(check_if_last_char_is_a_letter("apple") == true);
    assert(check_if_last_char_is_a_letter("") == false);
    return 0;
}