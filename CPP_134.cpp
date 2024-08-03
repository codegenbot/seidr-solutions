```cpp
#include <iostream>
#include <cctype>
#include <string>

bool check_if_last_char_is_a_letter(std::string txt) {
    if(txt.empty()) return false;
    std::string last_char = txt.substr(txt.length() - 1);
    for(int i=0; i<txt.length(); i++) {
        if(txt[i] == ' ' && i != (txt.length()-1)) {
            std::string word = txt.substr(i+1, txt.length()-i-1);
            if(last_char == word) return false;
        }
    }
    return isalpha(txt[txt.length()-1]);
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    if(check_if_last_char_is_a_letter(input))
        std::cout << "The last character of the string is a letter." << std::endl;
    else
        std::cout << "The last character of the string is not a letter." << std::endl;
    return 0;
}