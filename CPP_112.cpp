```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool checkEquality(std::string& s, std::string& c) {
    return s == "True";
}

std::string reverse_delete(std::string& s, std::string& c) {
    if(s.empty() || c.empty()) {
        return "False";
    }
    
    std::string temp = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += ch;
        }
    }
    std::string rev = temp;
    std::reverse(rev.begin(), rev.end());
    return rev;
}

int main() {
    std::string s1 = reverse_delete("mamma", "mia");
    std::string s2 = "mama";
    
    bool isSame = checkEquality(s1, "True");
    if(s1.length() > 0 && s2.length() > 0) {
        std::string s1_non_const = s1;
        std::string s2_non_const = s2;
        
        s1_non_const.erase(std::remove_if(s1_non_const.begin(), s1_non_const.end(), ::isspace), s1_non_const.end());
        s2_non_const.erase(std::remove_if(s2_non_const.begin(), s2_non_const.end(), ::isspace), s2_non_const.end());
        
        if(s1_non_const == s2_non_const) {
            std::cout << s1_non_const << " and " << s2_non_const << " are the same." << std::endl;
        } else {
            std::cout << s1_non_const << " and " << s2_non_const << " are not the same." << std::endl;
        }
    } else if (s1.empty() && s2.empty()) {
        std::cout << s1 << " and " << s2 << " are the same." << std::endl;
    } else {
        std::cout << s1 << " and " << s2 << " are not the same." << std::endl;
    }
    return 0;
}