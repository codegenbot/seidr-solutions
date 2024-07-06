```
#include <iostream>
#include <vector>
#include <string>

bool isSame(const std::string& s1, const std::string& s2) {
    if (s1.length() != s2.length()) return false;
    for (int i = 0; i < s1.length(); ++i) {
        if (s1[i] != s2[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> strings(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> strings[i];
    }
    
    std::cout << "Enter the substring: ";
    std::string substring;
    std::cin >> substring;
    
    std::vector<std::string> filtered = filter_by_substring(strings, substring);
    
    for (const auto& s : filtered) {
        bool isSameResult = true;
        for (int i = 0; i < s.length(); ++i) {
            char c1 = s[i];
            for (int j = 0; j < s.length(); ++j) {
                if (c1 == substring[j % substring.length()]) {
                    isSameResult = isSame(s, substring);
                    break;
                }
            }
        }
        std::cout << s << " : " << (isSameResult ? "Is Same" : "Not Same") << std::endl;
    }
    
    return 0;
}