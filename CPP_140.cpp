#include <iostream>
using namespace std;

const char* fix_spaces(const char* text) {
    bool isPrevSpace = false;
    const char *result = new char[strlen(text) + 1];
    int i = 0, j = 0; // index for original and new strings

    for(; text[i] != '\0'; i++) { 
        if (text[i] == ' ') {
            if (!isPrevSpace) {
                result[j++] = '_'; 
                isPrevSpace = true;
            }
        } else {
            result[j++] = text[i]; 
            isPrevSpace = false;
        }
    }

    result[j] = '\0';
    return result;
}

int main() {
    const char* text = "   Exa 1 2 2 mple"; 
    const char *fixedText = fix_spaces(text);
    cout << "Fixed string: ";
    for (char c : fixedText) cout << c; 
    cout << endl;
    delete[] fixedText;
    return 0;
}