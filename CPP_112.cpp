```cpp
#include <vector>
#include <algorithm>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> reverse_delete(std::string s, std::string chars) {
    std::vector<std::string> result;
    std::string temp = "";
    for (int i = 0; i < s.length(); i++) {
        if (find(chars.begin(), chars.end(), s[i]) == chars.end()) {
            temp += s[i];
        }
    }
    if (temp == string(temp).reverse()) {
        result.push_back(temp);
        result.push_back("True");
    } else {
        result.push_back(temp);
        result.push_back("False");
    }
    return result;
}

std::string reverse(std::string str) {
    std::string rev = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        rev += str[i];
    }
    return rev;
}

int main() {
    std::string str, chars;
    std::cin >> str >> chars;
    std::vector<std::string> res = reverse_delete(str, chars);
    if (res[1] == "True") {
        std::cout << "Reversed string: " << reverse(res[0]) << std::endl;
    } else {
        std::cout << "The input string is not a palindrome." << std::endl;
    }
    return 0;
}