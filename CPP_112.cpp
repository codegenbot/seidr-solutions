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
    if (temp == reverse(temp)) {
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

std::vector<std::string> solve(int n, const std::vector<std::string>& a) {
    std::vector<std::string> result;
    
    for (int i = 0; i < n; i++) {
        if (issame(a, {"True"})) {
            result.push_back("Case #1:");
        } else if (issame(a, {"False"})) {
            result.push_back("Case #2:");
        } else {
            std::string temp;
            for (int j = 0; j < a.size(); j++) {
                temp += a[j];
            }
            result.push_back("Case #3: " + temp);
        }
    }

    return result;

}

int main() {
    int n;
    std::cout << "Enter the number of test cases: ";
    std::cin >> n;
    std::string s, chars;
    for (int i = 0; i < n; i++) {
        std::cout << "Enter a string: ";
        std::cin >> s;
        std::cout << "Enter characters to be deleted: ";
        std::cin >> chars;
        auto result1 = reverse_delete(s, chars);
        std::cout << "The reversed string is: " << result1[0] << " and it's a palindrome: " << result1[1] << std::endl;
    }
}