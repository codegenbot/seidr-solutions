#include <string>

bool is_palindrome(string text);

bool is_palindrome(string text){
    int length = text.length();
    for (int i = 0; i < length / 2; i++) {
        if (text[i] != text[length - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string input;
    cout << "Enter a text: ";
    cin >> input;
    
    if (is_palindrome(input)) {
        cout << "The text is a palindrome." << endl;
    } else {
        cout << "The text is not a palindrome." << endl;
    }
    
    return 0;
}