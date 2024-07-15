#include <vector>
#include <iostream>
#include <string>

std::string kebabToCamel(std::string input) {
    std::string output = "";
    bool capitalizeNext = true;

    for (char c : input) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (c == ' ') {
            output += " ";
            capitalizeNext = false;
        } else {
            if (capitalizeNext) {
                output += std::toupper(c);
                capitalizeNext = false;
            } else {
                output += c;
            }
        }
    }

    return output;
}

int main() {
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        cout << kebabToCamel(s) << endl;
    }
    
    return 0;
}