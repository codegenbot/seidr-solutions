#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    bool firstWord = true;
    
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '-') {
            i++; // Skip the '-'
            while (i < str.size() && (str[i] == ' ' || str[i] == '-')) {
                i++; // Skip spaces and '-'
            }
        } else if (!firstWord) {
            result += std::toupper(str[i]);
        } else {
            firstWord = false;
            result += tolower(str[i]);
        }
    }
    
    return result;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string str;
        cin >> str;
        
        cout << camelCase(str) << endl;
    }

    return 0;
}