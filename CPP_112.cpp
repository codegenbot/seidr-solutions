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
    if(!s1.empty()) {
        std::string s1_temp = s1;
        s1 = s1_temp.erase(std::remove_if(s1_temp.begin(), s1_temp.end(), ::isspace), s1_temp.end());
    }
    if(!s2.empty()) {
        std::string s2_temp = s2; // Add const here
        s2 = s2_temp.erase(std::remove_if(s2_temp.begin(), s2_temp.end(), ::isspace), s2_temp.end());
    }
    
    if(isSame) {
        std::cout << s1 << " and " << s2 << " are the same." << std::endl;
    } else {
        std::cout << s1 << " and " << s2 << " are not the same." << std::endl;
    }
    return 0;
}