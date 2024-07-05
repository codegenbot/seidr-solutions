#include <iostream>
#include <string>
#include <cctype>
#include <cassert> // Add this line to include the assert header

using namespace std;

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty() || !isalpha(txt.back())) return false;
    size_t lastSpace = txt.find_last_of(' ');
    if (lastSpace == string::npos) return true;
    return isalpha(txt.back()) && txt.length() - lastSpace == 2;
}

int main() {
    // Ensure all test cases are present within the original main function
    assert(check_if_last_char_is_a_letter("apple pie") == true);
    assert(check_if_last_char_is_a_letter("apple pie ") == false);
    return 0;
}