#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> reverse_delete(std::string s, std::string c){
    std::string result = "";
    for(char ch : s){
        if(c.find(ch) == std::string::npos){
            result += ch;
        }
    }
    std::string reversed = result;
    std::reverse(reversed.begin(), reversed.end());
    return {result, result == reversed ? "True" : "False"};
}

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    return a == b;
}

int main(){
    std::string input_s = "example string";
    std::string input_c = "aeiou";
    std::vector<std::string> result = reverse_delete(input_s, input_c);

    for(const auto& str : result){
        std::cout << str << " ";
    }

    return 0;
}