```cpp
#include <iostream>
#include <string>
using namespace std;

const char* fix_spaces(const string& text) {
    bool isPrevSpace = false;
    string result = "";
    for (unsigned int i = 0; i < text.length(); i++) { 
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
    string result = fix_spaces(text);
    cout << "Fixed string: " << result.c_str() << endl;
    return 0;
}