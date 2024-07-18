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
    cin >> input;
    if (is_palindrome(input)) {
        cout << "Yes, it is a palindrome." << endl;
    } else {
        cout << "No, it is not a palindrome." << endl;
    }
    
    return 0;
}