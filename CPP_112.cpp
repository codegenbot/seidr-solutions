```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool checkEquality(std::string s, std::string c) {
    return s == c;
}

std::string reverse_delete(std::string s, std::string c) {
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
    if(checkEquality(s1, "True")) {  
        std::cout << s1 << " and " << s2 << " are the same." << std::endl;
    } else {
        std::cout << s1 << " and " << s2 << " are not the same." << std::endl;
    }
    return 0;
}