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
    bool issame(const std::string& s1, const std::string& s2) {
        return s1 == s2;
    }
    std::string palindrome_check = issame(result, std::string(result.rbegin(), result.rend())) ? "True" : "False";
    return palindrome_check;
}