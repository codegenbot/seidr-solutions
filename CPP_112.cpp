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

bool issame(std::string a, std::string b) {
    return (a.empty() && b.empty()) || (a == b);
}

int main() {
    bool isEqual = checkEquality("True");
    
    if(isEqual) {
        std::cout << "True is equal to itself." << std::endl;
    } else {
        std::cout << "True is not equal to itself." << std::endl;
    }
    
    assert(issame(reverse_delete("mamma", "mia"), reverse_delete(std::vector<std::string>({"", "True"})).front()));
    
    return 0;
}