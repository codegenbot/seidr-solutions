#include <iostream>
#include <vector>
#include <algorithm>

std::pair<std::string, std::string> reverse_delete(const std::string& s, const std::string& c) {
    std::string result = "";
    for (char ch : s) {
        if (c.find(ch) == std::string::npos) {
            result += ch;
        }
    }
    std::string reverse_result = result;
    std::reverse(reverse_result.begin(), reverse_result.end());
    
    return {result, result == reverse_result ? "True" : "False"};
}

bool issame(const std::pair<std::string, std::string>& a, const std::pair<std::string, std::string>& b){
    return (a.first == b.first && a.second == b.second);
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
    
    return 0;
}