#include <vector>
bool issame(const std::string& s);

bool issame(const std::string& s){
    return s == std::string(s.rbegin(), s.rend());
}

std::vector<std::string> reverse_delete(std::string s, std::string c){
    std::string result = "";
    for(char ch : s){
        if(c.find(ch) == std::string::npos){
            result += ch;
        }
    }
    std::string reversed = result;
    std::reverse(reversed.begin(), reversed.end());
    return {result, issame(result) ? "True" : "False"};
}