#include <string>
#include <cctype>

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false; 
    char lastChar = txt.back(); 
    return isalpha(lastChar) && !isalnum(lastChar);
}

int main() {
    assert(check_if_last_char_is_a_letter("apple pi e ") == false);
    string input;
    cout << "Enter a sentence: ";
    cin >> input;
    if (check_if_last_char_is_a_letter(input)) {
        cout << "The last character is a letter." << endl;
    } else {
        cout << "The last character is not a letter." << endl;
    }
    return 0;
}