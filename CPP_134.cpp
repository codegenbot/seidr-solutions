#include <iostream>
#include <cassert>
#include <string>
using namespace std;

bool check_if_last_char_is_a_letter(const std::string& txt) {
    if(txt.empty()) return false;
    char lastChar = txt.back();
    if(isalpha(lastChar)){
        if(txt.find_last_of(" ") == txt.length()-1) return true;
    }
    return false;
}

int main() {
    bool check_if_last_char_is_a_letter(const std::string&);
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    assert(check_if_last_char_is_a_letter(input));
    return 0;
}