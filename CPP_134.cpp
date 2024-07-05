#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    size_t end = txt.find_last_not_of(' ');
    if (end == string::npos) return false;
    return isalpha(txt[end]);
}

int main() {
    cout << boolalpha;
    cout << check_if_last_char_is_a_letter("apple pie ") << endl;
    cout << check_if_last_char_is_a_letter("apple pie") << endl;
    cout << check_if_last_char_is_a_letter(" ") << endl;
    return 0;
}