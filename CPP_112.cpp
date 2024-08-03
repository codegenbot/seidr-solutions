```
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result;
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
    result.push_back(temp);
    std::string revTemp = temp;
    std::reverse(revTemp.begin(), revTemp.end());
    result.push_back((temp == revTemp) ? "True" : "False");
    return result;
}

int main() {
    std::string s, c;
    std::cout << "Enter the string: ";
    std::cin >> s;
    std::cout << "Enter the character to delete: ";
    std::cin >> c;
    std::vector<std::string> output = reverse_delete(s, c);
    if (issame({s}, output)) {
        std::cout << "The original string is the same as the reversed string." << std::endl;
    } else {
        std::cout << "The original string and the reversed string are different." << std::endl;
    }
    return 0;
}