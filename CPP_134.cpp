#include <string>
#include <cassert>

bool check_if_last_char_is_a_letter(std::string txt) {
    if(txt.empty()) return false;
    char lastChar = txt.back();
    if(isalpha(lastChar) && txt.find_last_of(" ") == txt.size()-1) return true;
    return false;
}

int main() {
    assert (check_if_last_char_is_a_letter("apple pi e ") == false);
    // Add more test cases here
    return 0;
}