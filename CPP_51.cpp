#include <string>

string remove_vowels(string text){
    string result = "";
    for (char c : text) {
        if (!isalpha(c)) {
            result += c;
        } else if (!ispunct(c) && toupper(c) != 'A' && toupper(c) != 'E' && toupper(c) != 'I' && toupper(c) != 'O' && toupper(c) != 'U') {
            result += tolower(c);
        }
    }
    return result;
}