#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

std::vector<std::string> reverse_delete(std::string s, std::string c){
    std::string result;
    for(char ch : s){
        if(c.find(ch) == std::string::npos){
            result.push_back(ch);
        }
    }
    std::string reversed = result;
    std::reverse(reversed.begin(), reversed.end());
    return {result, issame({result}, {reversed}) ? "True" : "False"};
}