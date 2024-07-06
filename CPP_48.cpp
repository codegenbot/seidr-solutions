```c++
#include <string>

bool is_palindrome(std::string text){
    int i = 0, j = text.length() - 1;
    while(i < j){
        if(text[i] != text[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    assert(is_palindrome("xywzx") == false);
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    if (is_palindrome(input)) {
        std::cout << "The entered string is a palindrome." << std::endl;
    } else {
        std::cout << "The entered string is not a palindrome." << std::endl;
    }
}