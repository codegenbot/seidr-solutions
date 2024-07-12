#include <string>

using namespace std;

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    
    string lastChar = txt.substr(txt.size() - 1);
    bool isLastCharLetter = isalpha(lastChar[0]);
    
    if (!isalpha(*txt.rbegin)) return false; // Check if the last char is a letter
    return !ispunct(lastChar[0]) && !isspace(lastChar[0]); // Check if it's not part of a word
}