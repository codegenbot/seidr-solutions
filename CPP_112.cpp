#include <iostream>
#include <vector>
#include <algorithm>

std::string reverse_string(const std::string& s) {
    std::string result = "";
    for (int i = s.size() - 1; i >= 0; --i) {
        result += s[i];
    }
    return result;
}

bool is_palindrome(const std::string& s) {
    return (s == reverse_string(s));
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result;
    s = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            s += ch;
        }
    }
    result.push_back(s);
    std::string rev = reverse_string(s);
    if (s == rev) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}

int main() {
    std::vector<std::string> result = reverse_delete("mamma", "mia");
    // Check your expected output
    return 0;
}