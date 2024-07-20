#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::string result = "";
    bool first = true;
    
    for (char c : s) {
        if (c == '-') {
            result += (first ? "" : "") + toupper(s[++s.find(c)]);
            while (s.find(c) != std::string::npos && s[s.find(c)+1] == '-') 
                s.erase(s.find(c), 1);
            first = false;
        } else if (c != '-') {
            result += c;
        }
    }
    
    return result;
}

int main() {
    std::cout << camelCase("camel-case example-test-string") << std::endl;
    return 0;
}