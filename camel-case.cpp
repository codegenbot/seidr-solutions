#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    int start = 0;
    
    for(int i = 0; i <= s.length(); i++) {
        if(i == s.length() || (s[i] == ' ' && i > start)) {
            if(start < i) {
                char c = toupper(s[start]);
                result += c;
                for(int j = start + 1; j < i; j++)
                    result += tolower(s[j]);
            }
            start = i + 1;
        }
    }
    
    return result;
}

int main() {
    std::string s;
    while(std::cin >> s) {
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}