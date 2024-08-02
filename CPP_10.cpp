#include <string>
#include <cassert>

bool is_palindrome(const std::string& str) {
    int i = 0, j = str.size() - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }
        ++i;
        --j;
    }
    return true;
}

std::string make_palindrome(std::string str);

std::string make_palindrome(std::string str) {
    if (str.empty()) 
        return str;
    
    int n = str.size();
    
    for (int i = n - 1; i >= 0; --i) {
        if (is_palindrome(str.substr(i))) {
            return str + std::string(str.rbegin(), str.rbegin() + n - i);
        }
    }
    
    return str + std::string(str.rbegin() + 1, str.rend());
}

int main() {
    assert(make_palindrome("jerry") == "jerryrrej");
    return 0;
}