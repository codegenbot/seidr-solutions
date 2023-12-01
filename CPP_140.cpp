#include <iostream>
#include <string>

using namespace std;

string fix_spaces(string text) {
    string result = "";
    int consecutiveSpaces = 0;
    
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            consecutiveSpaces++;
            
            if (consecutiveSpaces > 2) {
                result += "-";
                consecutiveSpaces = 1;
            } else {
                result += "_";
            }
        } else {
            result += text[i];
            consecutiveSpaces = 0;
        }
    }
    
    return result;
}

int main() {
    string text;
    getline(cin, text);
    
    string fixedText = fix_spaces(text);
    cout << fixedText << endl;
    
    return 0;
}