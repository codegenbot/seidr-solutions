#include <string>

std::string flip_case(std::string str) {
    for (int i = 0; i < str.length(); i++) {
        char c = str[i];
        if (isalpha(c)) {
            c = (islower(c)) ? toupper(c) : tolower(c);
            str[i] = c;
        }
    }
    return str;
}