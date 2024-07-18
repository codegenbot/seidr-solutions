#include <string>

bool is_palindrome(std::string text) {
    int left = 0;
    int right = text.length() - 1;
    while (left < right) {
        if (text[left] != text[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    std::string input;
    std::cin >> input;
    
    if (is_palindrome(input)) {
        std::cout << "Yes, it's a palindrome.";
    } else {
        std::cout << "No, it's not a palindrome.";
    }
    
    return 0;
}