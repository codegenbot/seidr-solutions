```
#include <iostream>
#include <vector>
#include <algorithm>

bool isSame(const std::string& s1, const std::string& s2) {
    if (s1.size() != s2.size()) return false;
    for (int i = 0; i < s1.size(); ++i) {
        if (s1[i] != s2[i]) return false;
    }
    return true;
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
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
    return {result, (isSame(result, reversed) ? "True" : "False")};
}

int main() {
    std::string s, c;
    std::cout << "Enter a string: ";
    std::cin >> s;
    std::cout << "Enter another string: ";
    std::cin >> c;
    auto output = reverse_delete(s, c);
    for (const auto& str : output) {
        std::cout << str << std::endl;
    }
    return 0;
}