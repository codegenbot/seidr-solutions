#include <iostream>
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
            result += ch;
        }
    }
    std::string palindrome_check = result;
    std::reverse(palindrome_check.begin(), palindrome_check.end());
    return {result, result == palindrome_check ? "True" : "False"};
}

int main(){
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
    return 0;
}