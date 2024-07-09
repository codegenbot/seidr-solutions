#include <vector>
#include <algorithm>

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::string res = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found)
            res += ch;
    }
    
    std::vector<std::string> result;
    result.push_back(res);
    std::string temp = res;
    std::reverse(temp.begin(), temp.end());
    if (res == temp)
        result.push_back("True");
    else
        result.push_back("False");
    
    return result;

bool isSame(std::string s1, std::string s2) {
    if(s1.length() != s2.length())
        return false;
    for(int i = 0; i < s1.length(); i++) {
        if(s1[i] != s2[i])
            return false;
    }
    return true;
}