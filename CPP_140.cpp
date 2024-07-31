#include <iostream>
using namespace std;

void fix_spaces(const char* text) {
    bool isPrevSpace = false;
    for(int i = 0; text[i] != '\0'; i++) { 
        if (text[i] == ' ') {
            if (!isPrevSpace) {
                text[i] = '_'; 
                isPrevSpace = true;
            }
        } else {
            text[i] = text[i]; 
            isPrevSpace = false;
        }
    }
}

int main() {
    const char* text = "   Exa 1 2 2 mple"; 
    fix_spaces(text);
    cout << "Fixed string: ";
    for (char c : text) cout << c; 
    cout << endl;
    return 0;
}