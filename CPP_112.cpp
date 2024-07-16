#include <vector>
#include <string>
#include <cassert>

std::string reverse_delete(std::string s, std::string c){
    std::string result = "";
    for(char ch : s){
        if(c.find(ch) == std::string::npos){
            result += ch;
        }
    }
    bool issame(const std::string &a, const std::string &b) {
        return a == b;
    }
    std::string palindrome_check = (issame(result, std::string(result.rbegin(), result.rend()))) ? "True" : "False";
    return palindrome_check;
}