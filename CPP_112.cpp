#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result;
    std::string temp = "";
    for (int i = 0; i < s.length(); i++) {
        bool flag = false;
        for (int j = 0; j < c.length(); j++) {
            if (s[i] == c[j]) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            temp += s[i];
        }
    }
    std::string palindromCheck = temp;
    std::reverse(palindromCheck.begin(), palindromCheck.end());
    result.push_back(temp);
    if (temp == palindromCheck) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}