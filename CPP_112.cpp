#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool checkEquality(std::string s, std::string c) {
    return s == "True";
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
    return rev + " " + temp;
}

int main() {
    std::cout << reverse_delete("mamma", "mia") << std::endl;
    return 0;
}