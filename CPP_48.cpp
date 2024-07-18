#include <string>

bool is_palindrome(string text) {
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
    string input;
    std::cin >> input;
    
    if (is_palindrome(input)) {
        std::cout << "Input is a palindrome.";
    } else {
        std::cout << "Input is not a palindrome.";
    }
    
    return 0;
}