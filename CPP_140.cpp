#include <iostream>
#include <string>

void fix_spaces(std::string& text) {
    bool isPrevSpace = false;
    for (int i = 0; i < text.length(); i++) {
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
    std::string text = "   Exa 1 2 2 mple";
    fix_spaces(text);
    cout << "Fixed string: " << text << endl;
    return 0;
}