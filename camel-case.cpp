#include <iostream>
#include <cctype>

int main() {
    string input;
    getline(cin, input);
    
    string result = "";
    bool capitalize = false;
    
    for (char c : input) {
        if (c == '-') {
            capitalize = true;
        } else if (c == ' ') {
            capitalize = false;
            result += c;
        } else {
            if (capitalize) {
                result += toupper(c);
            } else {
                result += c;
            }
            capitalize = false;
        }
    }
    
    cout << result << endl;
    
    return 0;
}