#include <iostream>
using namespace std;

const char* fix_spaces(const char* text) {
    bool isPrevSpace = false;
    char* result = new char[strlen(text)+1];
    int j=0;
    for(int i = 0; text[i] != '\0'; i++) { 
        if (text[i] == ' ') {
            if (!isPrevSpace) {
                result[j] = '_'; 
                isPrevSpace = true;
                j++;
            }
        } else {
            result[j] = text[i]; 
            isPrevSpace = false;
            j++;
        }
    }
    result[j]='\0';
    return result;
}

int main() {
    const char* text = "   Exa 1 2 2 mple"; 
    const char* fixed_text = fix_spaces(text);
    cout << "Fixed string: ";
    for (char c : fixed_text) cout << c; 
    cout << endl;
    delete[] fixed_text;
    return 0;
}