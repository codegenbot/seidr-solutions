#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

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
    std::string result_reversed = result;
    std::reverse(result_reversed.begin(), result_reversed.end());
    
    return {result, issame({result, result_reversed}, {result, result_reversed}) ? "True" : "False"};
}

int main() {
    std::vector<std::string> expected = {"", "True"};
    std::vector<std::string> result = reverse_delete("mamma", "mia");
    assert(issame(result, expected));
    
    return 0;
}