#include <iostream>
using namespace std;

bool check_if_last_char_is_a_letter(const string& txt) {
    if (txt.empty()) {
        return false;
    }

    char lastChar = txt.back();
    if (isalpha(lastChar)) {
        size_t lastSpacePos = txt.find_last_of(' ');
        if (lastSpacePos == string::npos || lastSpacePos == txt.length() - 1) {
            return true;
        }
    }

    return false;
}

int main() {
    assert (check_if_last_char_is_a_letter("apple pi e ") == false);
    // Add more test cases here

    return 0;
}