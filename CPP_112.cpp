#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using string = std::basic_string<char>;

bool issame(std::vector<string> a, std::vector<string> b){
    return a == b;
}

std::vector<string> reverse_delete(string s, string c){
    std::string result = "";
    for(char ch : s){
        if(c.find(ch) == std::string::npos){
            result += ch;
        }
    }
    std::string reverse_result = result;
    std::reverse(reverse_result.begin(), reverse_result.end());
    return {result, (result == reverse_result) ? "True" : "False"};
}

assert(issame(reverse_delete("mamma", "mia"), {"", "True"});