```cpp
#include <iostream>
using namespace std;

const char* fix_spaces(const char* text) {
    bool isPrevSpace = false;
    string result = "";
    for (size_t i = 0; i < strlen(text); i++) { 
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
    const char* str = "Hello World";
    cout << fix_spaces(str) << endl;  
    return 0;
}