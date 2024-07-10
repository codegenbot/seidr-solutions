```cpp
#include <vector>
#include <set>
#include <string>

std::vector<std::string> reverse_delete(std::string s, std::string c) {
    std::vector<std::string> result;
    
    std::set<char> c_set(c.begin(), c.end());
    
    std::string temp = "";
    
    for (char ch : s) {
        if (c_set.find(ch) == c_set.end()) {
            temp += ch;
        }
    }
    
    bool is_palindrome = true;
    for (int i = 0; i < temp.length() / 2; i++) {
        if (temp[i] != temp[temp.length() - i - 1]) {
            is_palindrome = false;
            break;
        }
    }
    
    result.push_back(temp);
    result.push_back((is_palindrome) ? "True" : "False");
    
    return result;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return (a == b);
}