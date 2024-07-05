#include <iostream>
#include <string>
#include <cctype>
#include <cassert>
using namespace std;

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty() || !isalpha(txt.back())) return false;
    int n = txt.length();
    for (int i = n - 2; i >= 0; --i) {
        if (txt[i] == ' ') return true;
        if (isalpha(txt[i])) return false;
    }
    return true;
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pie ") == false);
    assert(check_if_last_char_is_a_letter("apple pie") == true);
    assert(check_if_last_char_is_a_letter("apple   ") == false); 
    cout << "All tests passed!" << endl;
    return 0;
}