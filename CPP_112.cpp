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
        if (chars.find(std::string(1, s[i])) == std::string::npos) {
            temp += s[i];
        }
    }
    if (temp == std::string(temp).reverse()) {
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

int main() {
    std::string s, chars;
    std::cout << "Enter a string: ";
    std::cin >> s;
    std::cout << "Enter characters to delete: ";
    std::cin >> chars;
    
    std::vector<std::string> res = reverse_delete(s, chars);
    for (int i = 0; i < res.size(); i++) {
        std::cout << res[i] << " ";
    }
    std::cout << endl;
    
    return 0;
}