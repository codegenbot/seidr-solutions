#include <string>
#include <vector>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    std::string s = a[0];
    std::string c = b[0];

    std::string result = "";
    for(char ch : s){
        if(c.find(ch) == std::string::npos){
            result += ch;
        }
    }
    std::string reversed = result;
    std::reverse(reversed.begin(), reversed.end());
    return result == reversed;
}

std::vector<std::string> reverse_delete(std::string s, std::string t) {
    return {issame({s}, {t}) ? "True" : "False"};
}