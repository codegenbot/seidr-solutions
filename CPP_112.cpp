```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool isSame(const std::string& s1, const std::string& s2) {
    if (s1.length() != s2.length()) return false;
    for (int i = 0; i < s1.length(); ++i) {
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
    std::string str1, str2;
    std::cout << "Enter the string: ";
    std::cin >> str1;
    std::cout << "Enter the character to be deleted: ";
    std::cin >> str2;
    std::vector<std::string> output = reverse_delete(str1, str2);
    for (const auto& s : output) {
        std::cout << s << std::endl;
    }
    return 0;
}