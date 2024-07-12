```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool checkEquality(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
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
    if (temp == rev) {
        return "True";
    } else {
        return "False";
    }
}

int main() {
    if(checkEquality({{"", "True"}}, {{"", reverse_delete("mamma", "mia").to_string()}}) == 0) {
        std::cout << "The strings are the same." << std::endl;
    } else {
        std::cout << "The strings are not the same." << std::endl;
    }
    return 0;
}