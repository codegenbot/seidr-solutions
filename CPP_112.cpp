#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<std::string>& a,const std::vector<std::string>& b){
    return a == b;
}

std::vector<std::string> reverse_delete(const std::string& a, const std::string& b) {
    std::string s = a + b;
    std::string result = "";
    for (char ch : s) {
        if (result.find(ch) == std::string::npos) {
            result += ch;
        }
    }
    std::reverse(result.begin(), result.end());
    return {result, "True"};
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), std::vector<std::string>{"aim", "True"}));
    return 0;
}