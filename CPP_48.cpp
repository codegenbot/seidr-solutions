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
    // Test the is_palindrome function
    std::string input = "racecar";
    if (is_palindrome(input)) {
        std::cout << "Input is a palindrome." << std::endl;
    } else {
        std::cout << "Input is not a palindrome." << std::endl;
    }
    return 0;
}