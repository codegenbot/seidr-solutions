// Include necessary header files
#include <iostream>
#include <string>
#include <cctype>
#include <cassert>

// Define the function with correct signature
bool check_if_last_char_is_a_letter(const std::string& txt) {
    if (txt.empty()) {
        return false;
    }

    char lastChar = txt.back();
    if (isalpha(lastChar)) {
        size_t lastSpacePos = txt.find_last_of(' ');
        if (lastSpacePos == std::string::npos || lastSpacePos == txt.length() - 1) {
            return true;
        }
    }

    return false;
}

// Implement main function
int main() {
    assert (check_if_last_char_is_a_letter("apple pi e ") == false);
    // Add more test cases if needed

    return 0;
}