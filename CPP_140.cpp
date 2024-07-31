#include <iostream>
using namespace std;

void fix_spaces(char* text) {
    bool isPrevSpace = false;
    for (int i = 0; i < strlen(text); i++) {
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
    char* text = new char[strlen("   Exa 1 2 2 mple") + 1];
    strcpy(text, "   Exa 1 2 2 mple");
    fix_spaces(text);
    cout << "Fixed string: ";
    for (char c : text) cout << c;
    cout << endl;
    delete[] text;
    return 0;
}