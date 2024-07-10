#include <string>

bool is_palindrome(std::string text){
    int i = 0, j = text.length() - 1;
    while (i < j) {
        if (std::tolower(text[i]) != std::tolower(text[j]))
            return false;
        i++;
        j--;
    }
    return true;
}