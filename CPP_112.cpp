```cpp
#include <algorithm>
#include <string>

bool checkEquality(std::string& s) {
    return s.compare(0, 4, "True") == 0;
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

int main() {
    bool issame(int a, int b) { return a == b; }
    std::string s1 = reverse_delete("mamma", "mia");
    std::string s2 = "mama";
    
    if (issame(s1.compare(s2), 0)) {
        std::cout << "Equal" << std::endl;
    } else {
        std::cout << "Not Equal" << std::endl;
    }
    
    bool isEqual = checkEquality(s1);
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
    return 0;
}