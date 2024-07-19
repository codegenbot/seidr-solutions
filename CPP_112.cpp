
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

std::vector<std::string> reverse_delete(const std::string& s, const std::string& c) {
    std::string result = "";
    for (char ch : s) {
        if (c.find(ch) == std::string::npos) {
            result += ch;
        }
    }
    std::string temp = result;
    std::reverse(temp.begin(), temp.end());
    std::vector<std::string> ans;
    ans.push_back(result);
    ans.push_back(result == temp ? "True" : "False");
    return ans;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b){
    return a == b;
}

int main() {
    std::string s, c;
    std::cin >> s >> c;
    std::vector<std::string> result = reverse_delete(s, c);
    for (const auto& str : result) {
        std::cout << str << " ";
    }
    std::cout << std::endl;
    return 0;
}