#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i < a.size(); ++i){
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::string result = "";
    for (char ch : s) {
        if (c.find(ch) == std::string::npos) {
            result += ch;
        }
    }
    std::string reversed = result;
    std::reverse(reversed.begin(), reversed.end());
    return {result, (result == reversed) ? "True" : "False"};
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
}