#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    std::string s = a[0];
    std::string c = b[0];

    std::string result = "";
    for(char ch : s){
        if(c.find(ch) == std::string::npos){
            result += ch;
        }
    }
    std::string reversed = result;
    std::reverse(reversed.begin(), reversed.end());
    return result == reversed; // Return boolean value directly
}

std::vector<std::string> reverse_delete(std::string s, std::string t) {
    bool areSame = issame({s}, {t});
    return {areSame ? "True" : "False"}; // Return a vector with one string element
}

int main() {
    std::string s, t;
    std::cin >> s >> t;
    auto result = reverse_delete(s, t);
    for(const auto& str : result) {
        std::cout << str << "\n";
    }
    return 0;
}