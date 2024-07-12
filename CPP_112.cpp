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
    return rev == temp ? "True" : "False";
}

int main() {
    std::string s1 = reverse_delete("mamma", "mia");
    std::string s2 = "mama";
    
    if(checkEquality(reverse_delete("mamma", "mia"), "True")) {
        if(s1.size() == s2.size()) {
            for(int i=0; i<s1.size(); i++) {
                if(s1[i] != s2[i]) {
                    std::cout << s1 << " and " << s2 << " are not the same." << std::endl;
                    return 0;
                }
            }
            std::cout << s1 << " and " << s2 << " are the same." << std::endl;
        } else {
            std::cout << s1 << " and " << s2 << " are not the same." << std::endl;
        }
    } else {
        std::cout << s1 << " and " << s2 << " are not the same." << std::endl;
    }
    return 0;
}