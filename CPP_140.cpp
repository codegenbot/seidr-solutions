#include <iostream>
using namespace std;

void fix_spaces(const char* text) {
    bool isPrevSpace = false;
    int i = 0;
    while (text[i] != '\0') {
        if (text[i] == ' ') {
            if (!isPrevSpace) {
                text[i] = '_';
                isPrevSpace = true;
            }
        } else {
            text[i] = text[i];
            isPrevSpace = false;
        }
        i++;
    }
}

int main() {
    char text[] = "   Exa 1 2 2 mple";
    fix_spaces(text);
    cout << "Fixed string: ";
    for (char c : text) cout << c;
    cout << endl;
    return 0;
}