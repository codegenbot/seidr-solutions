#include <string>
#include <vector>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> reverse_delete(const std::string& s, const std::string& c) {
    std::string result;
    for(char ch : s) {
        if(c.find(ch) == std::string::npos){
            result += ch;
        }
    }
    std::string rev_result = result;
    std::reverse(rev_result.begin(), rev_result.end());
    bool is_palindrome = (result == rev_result);
    return {result, (is_palindrome ? "True" : "False")};
}