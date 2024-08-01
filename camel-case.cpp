#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::string result = "";
    bool firstWord = true;
    
    for (char c : str) {
        if (c == '-') {
            if (!firstWord) {
                result += char(std::toupper(c));
            } else {
                firstWord = false;
            }
        } else if (c == ' ') {
            result += char(std::toupper(c));
            firstWord = true;
        } else {
            if (!firstWord) {
                result += c;
            } else {
                result += std::tolower(c);
                firstWord = false;
            }
        }
    }
    
    return result;
}

int main() {
    int numTestCases;
    cin >> numTestCases;

    for (int i = 0; i < numTestCases; ++i) {
        std::string str;
        cin >> str;
        
        cout << kebabToCamel(str) << endl;
    }
    
    return 0;
}