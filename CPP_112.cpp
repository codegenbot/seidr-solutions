#include <string>
#include <vector>
#include <algorithm>

bool issame(const std::string& a, const std::string& b){
    return a == b;
}

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
    ans.push_back(issame(result, temp) ? "True" : "False");
    return ans;
}