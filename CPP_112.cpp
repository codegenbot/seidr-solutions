#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::string& s1, const std::string& s2) {
    if (s1.size() != s2.size())
        return false;
    for (int i = 0; i < s1.size(); ++i)
        if (s1[i] != s2[i])
            return false;
    return true;
}

std::vector<std::string> reverse_delete(const std::string& s, const std::string& c) {
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
    return {result, (issame(result, reversed) ? "True" : "False")};
}

int main() {
    std::string str, char_set;
    std::cout << "Enter a string: ";
    std::cin >> str;
    std::cout << "Enter a character set: ";
    std::cin >> char_set;
    auto result = reverse_delete(str, char_set);
    for (const auto& s : result) {
        std::cout << s << "\n";
    }
    return 0;
}