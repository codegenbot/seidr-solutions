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
        s1 = s1.erase(std::remove_if(s1.begin(), s1.end(), ::isspace), s1.end());
    }
    if(!s2.empty()) {
        s2 = s2.erase(std::remove_if(s2.begin(), s2.end(), ::isspace), s2.end());
    }
    
    std::cout << "mama" << " and " << (s1.empty() ? "" : s1) << " are " << (isSame ? "" : "not ") << "the same." << std::endl;
    if(!s1.empty()) {
        std::cout << "After processing: " << (s1.empty() ? "" : s1) << std::endl;
        s1 = s1.erase(std::remove_if(s1.begin(), s1.end(), ::isspace), s1.end());
    }
    return 0;
}