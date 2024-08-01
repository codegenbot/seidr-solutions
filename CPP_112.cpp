#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    return a == b;
}

std::vector<std::string> reverse_delete(const std::string& s, const std::string& c){
    std::string result;
    for(char ch : s){
        if(c.find(ch) == std::string::npos){
            result += ch;
        }
    }

    std::string reversed = result;
    std::reverse(reversed.begin(), reversed.end());

    return {result, result == reversed ? "True" : "False"};
}

int main() {
    std::string s, c;
    std::cin >> s >> c;
    auto output = reverse_delete(s, c);
    for (const auto& str : output) {
        std::cout << str << " ";
    }
    return 0;
}