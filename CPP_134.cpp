#include <cctype>

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    
    int n = txt.size();
    
    // Trim trailing spaces
    while (n > 0 && isspace(txt[n-1])) {
        n--;
    }
    
    if (n == 0) return false;
    
    if (!isalpha(txt[n-1])) return false;
    
    // Check if it's part of a word
    return (n == 1 || isspace(txt[n-2]));
}