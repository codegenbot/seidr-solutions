#include <string>

bool is_palindrome(string text){
    int start = 0;
    int end = text.length() - 1;

    while(start < end){
        if(tolower(text[start]) != tolower(text[end])){
            return false;
        }
        start++;
        end--;
    }

    return true;
}