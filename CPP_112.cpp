#include <vector>
#include <string>

bool issame(const std::string& s1, const std::string& s2);

std::vector<std::string> reverse_delete(std::string s, std::string c){
    std::string result = "";
    for(char ch : s){
        if(c.find(ch) == std::string::npos){
            result += ch;
        }
    }
    std::string reversed = result;
    std::reverse(reversed.begin(), reversed.end());
    return {result, issame(result, reversed) ? "True" : "False"};
}

bool issame(const std::string& s1, const std::string& s2){
    return s1 == s2;
}