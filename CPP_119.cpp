```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> lst;

bool match_parens(const std::string& s) {
    int count = 0;
    for (char c : s) {
        if (c == '(')
            ++count;
        else if (c == ')')
            --count;
        if (count < 0)
            return false;
    }
    return count == 0;
}

int originalMain() { 
    int n;
    std::cin >> n;
    lst = std::vector<std::string>(); 
    for(int i=0; i<n; ++i){
        std::string s;
        std::getline(std::cin, s);
        if (!s.empty()) {
            bool isMatch = match_parens(s); 
            if(isMatch) {
                lst.push_back("Yes");
            } else {
                lst.push_back("No");
            }
        } else {
            lst.push_back("No");  // Changed from empty string
        }
    }
    for (const auto& str : lst) {
        std::cout << str << std::endl;
    }
}

int main() {
    originalMain(); 
}