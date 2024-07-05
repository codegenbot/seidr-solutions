#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

using namespace std;

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty() || !isalpha(txt.back())) return false;
    size_t lastSpace = txt.find_last_of(' ');
    if (lastSpace == string::npos) return true;
    return isalpha(txt.back()) && txt.length() - lastSpace == 2;
}

int main() {
    // Test cases
    assert(check_if_last_char_is_a_letter("apple pie ") == false);
    assert(check_if_last_char_is_a_letter("apple pie") == true);

    cout << "All test cases passed!" << endl;
    return 0;
}