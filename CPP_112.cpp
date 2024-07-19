#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string> reverse_delete(const std::string& s, const std::string& c) {
    std::string result = "";
    for(char ch : s){
        if(c.find(ch) == std::string::npos){
            result += ch;
        }
    }
    std::string original = result;
    std::reverse(result.begin(), result.end());
    return {original, original == result ? "True" : "False"};
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    return a == b;
}

int main() {
    assert (issame(reverse_delete("mamma", "mia") , {"", "True"}));
}