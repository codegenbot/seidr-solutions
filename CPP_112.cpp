```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool checkEquality(std::string& s) {
    return s == "True";
}

std::string reverse_delete(std::string& s, std::string& c) {
    if(s.empty() || c.empty()) {
        return "";
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

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    std::string s1 = reverse_delete("mamma", "mia");
    std::string s2 = "mama";
    
    bool isEqual = (s1 == s2) ? true : false;
    
    if(isEqual) {
        if (!s1.empty() && !s2.empty()) {
            std::cout << s1 << " and " << s2 << " are the same." << std::endl;
        } else if (s1.empty()) {
            if (s2.empty()) {
                std::cout << "empty and empty are the same." << std::endl;
            } else {
                std::cout << "empty and " << s2 << " are the same." << std::endl;
            }
        } else {
            if (s2.empty()) {
                std::cout << s1 << " and empty are the same." << std::endl;
            } else {
                std::cout << s1 << " and " << s2 << " are the same." << std::endl;
            }
        }
    } else {
        if (!s1.empty() && !s2.empty()) {
            std::cout << s1 << " and " << s2 << " are not the same." << std::endl;
        } else if (s1.empty() || s2.empty()) {
            std::cout << (s1.empty() ? "empty" : s1) << " and " << (s2.empty() ? "empty" : s2) << " are not the same." << std::endl;
        }
    }
    
    std::vector<std::string> vec1 = {reverse_delete("mamma", "mia"), ""};
    std::vector<std::string> vec2 = {"True"};
    assert(issame(vec1, vec2));
    if (checkEquality(s2)) {
        std::cout << "True is equal to itself." << std::endl;
    } else {
        std::cout << "True is not equal to itself." << std::endl;
    }
    
    return 0;
}