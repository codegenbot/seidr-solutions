#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::string& a, const std::string& b);

std::vector<std::string> reverse_delete(const std::string& s, const std::string& c);

std::vector<std::string> reverse_delete(const std::string& s, const std::string& c){
    std::string result = "";
    for(char ch : s){
        if(c.find(ch) == std::string::npos){
            result += ch;
        }
    }
    std::string result_reversed = result;
    std::reverse(result_reversed.begin(), result_reversed.end());
    return {result, issame(result, result_reversed) ? "True" : "False"};
}

bool issame(const std::string& a, const std::string& b) {
    return a == b;
}

int main() {
    assert (issame(reverse_delete("mamma", "mia")[0], "") && 
            issame(reverse_delete("mamma", "mia")[1], "True"));
}