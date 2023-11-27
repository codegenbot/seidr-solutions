#include <string>

bool is_palindrome(std::string text){
    int len = text.length();
    for(int i=0; i<len/2; i++){
        if(text[i] != text[len-i-1]){
            return false;
        }
    }
    return true;
}

int main() {
    std::string test1 = "racecar";
    std::string test2 = "hello";
    std::string test3 = "level";

    bool result1 = is_palindrome(test1);
    bool result2 = is_palindrome(test2);
    bool result3 = is_palindrome(test3);

    return 0;
}