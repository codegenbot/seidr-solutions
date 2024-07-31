#include <iostream>
using namespace std;

const char* fix_spaces(const string& text) {
    bool isPrevSpace = false;
    string result = "";
    for (char c : text) { 
        if (c == ' ') {
            if (!isPrevSpace) {
                result += "_"; 
                isPrevSpace = true;
            }
        } else {
            result += c; 
            isPrevSpace = false;
        }
    }
    return result.c_str();
}

int main() {
    string text = "   Exa 1 2 2 mple"; // Change const char* to string
    const char* fixed_text = fix_spaces(text);
    cout << "Fixed string: " << fixed_text << endl;
    return 0;
}