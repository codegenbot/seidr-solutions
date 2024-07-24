#include <iostream>
#include<string>

using namespace std;

bool check_if_last_char_is_a_letter(string txt) {
    if (txt.empty()) return false;
    for(int i = 0; i < txt.length() - 1; i++) {
        if(txt[i] == ' ') {
            char lastChar = txt.back();
            if(isalpha(lastChar))
                return true;
            else
                return false;
        }
    }
    char lastChar = txt.back();
    if(isalpha(lastChar))
        return true;
    return false;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    bool result = check_if_last_char_is_a_letter(input);
    cout << "Result: " << (result ? "true" : "false") << endl;
    return 0;
}