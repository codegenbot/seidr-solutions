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
    std::getline(std::cin, input);
    if (is_palindrome(input)) {
        std::cout << input << " is a palindrome." << std::endl;
    } else {
        std::cout << input << " is not a palindrome." << std::endl;
    }
}