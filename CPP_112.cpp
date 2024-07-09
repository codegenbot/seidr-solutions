#include <iostream>
#include <vector>
#include <algorithm>

bool isSame(const std::string& s1, const std::string& s2) {
    if (s1.length() != s2.length()) return false;
    for (int i = 0; i < s1.length(); ++i)
        if (s1[i] != s2[i]) return false;
    return true;
}

std::vector<std::string> reverseDelete(const std::string& s, const std::string& c) {
    std::string result = "";
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            result += ch;
        }
    }
    std::string reversed = result;
    std::reverse(reversed.begin(), reversed.end());
    return {result, isSame(s, result) ? "True" : "False"};
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;

    std::string charSet;
    std::cout << "Enter a set of characters: ";
    std::cin >> charSet;

    std::vector<std::string> output = reverseDelete(str, charSet);
    for (const auto& s : output) {
        std::cout << s << "\n";
    }

    return 0;
}