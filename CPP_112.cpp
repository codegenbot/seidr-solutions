#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool isSame(std::vector<std::basic_string<char>> a, std::vector<std::basic_string<char>> b) {
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
    assert(isSame(reverse_delete("mamma", "mia"), {"", "True"}));
    return 0;
}