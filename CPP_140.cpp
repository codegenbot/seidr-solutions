```cpp
#include <iostream>
#include <cstring>
using namespace std;

const char* fix_spaces(const char* text) {
    bool isPrevSpace = false;
    string result = "";
    for (unsigned int i = 0; i < strlen(text); i++) { 
        if (text[i] == ' ') {
            if (!isPrevSpace) {
                result += "_"; 
                isPrevSpace = true;
            }
        } else {
            result += text[i]; 
            isPrevSpace = false;
        }
    }
    return result.c_str();
}

int main() {
    const char* text = "   Exa 1 2 2 mple"; 
    string fixed_text = fix_spaces(text);
    cout << "Fixed string: " << fixed_text << endl;
    return 0;
}