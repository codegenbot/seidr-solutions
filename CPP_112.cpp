#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> reverse_delete(std::string s, std::string c);

bool issame(std::vector<std::string> a, std::vector<std::string> b);

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
    return 0;
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result;
    std::string res = "";

    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == std::string::npos) { 
            res += s[i]; 
        }
    }

    std::string rev_res = res;
    std::reverse(rev_res.begin(), rev_res.end());

    if (res == rev_res) {
        result.push_back(res);
        result.push_back("True");
    } else {
        result.push_back(res);
        result.push_back("False");
    }

    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}