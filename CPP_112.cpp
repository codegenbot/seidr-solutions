#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

std::vector<std::string> reverse_delete(std::string s, std::string c){
    std::string result = "";
    for(int i=0; i<s.length(); i++){
        if(c.find(s[i]) == std::string::npos){
            result += s[i];
        }
    }
    std::string rev_result = result;
    std::reverse(rev_result.begin(), rev_result.end());
    bool is_palindrome = (result == rev_result);
    std::vector<std::string> output = {result, (is_palindrome ? "True" : "False")};
    return output;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), std::vector<std::string>{"", "True"}));
    return 0;
}