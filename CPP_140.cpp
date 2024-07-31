```cpp
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
    char text[17] = "   Exa 1 2 2 mple";
    fix_spaces(text);
    cout << "Fixed string: " << text << endl;

    if (strcmp(text, "-Exa_1_2_2_mple") != 0) {
        assert(false);
    }

    return 0;
}