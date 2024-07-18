#include <string>

bool is_palindrome() {
    std::string text = "hello";
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
    // Test the function
    if (is_palindrome()) {
        std::cout << "Text is palindrome.";
    } else {
        std::cout << "Text is not palindrome.";
    }
    return 0;
}