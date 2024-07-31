#include <string>
#include <vector>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

std::vector<std::string> reverse_delete(std::string s, std::string c){
    std::string result = "";
    for(char ch : s){
        if(c.find(ch) == std::string::npos){
            result += ch;
        }
    }
    std::string rev_result = result;
    std::reverse(rev_result.begin(), rev_result.end());
    return {result, result == rev_result ? "True" : "False"};
}