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
    bool check_if_last_char_is_a_letter(const std::string& txt);
    // Read input from user
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    // Validate the last character
    bool result = check_if_last_char_is_a_letter(input);
    assert(result == true); // Ensure the result is as expected
    
    return 0;
}