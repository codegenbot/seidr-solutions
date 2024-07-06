```
#include <iostream>
#include <vector>
#include <string>

bool isSubstring(const std::string& s1, const std::string& s2) {
    if (s2.length() > s1.length()) return false;
    for(int i = 0; i <= s1.length() - s2.length(); i++) {
        int j = 0;
        while(j < s2.length() && i + j < s1.length() && s1[i + j] == s2[j]) {
            j++;
        }
        if(j == s2.length()) return true;
    }
    return false;
}

int main() {
    std::vector<std::string> strings = {"Hello", "world", "Hello world", "This is C++"};
    std::string substring;
    std::cout << "Enter a substring: ";
    std::cin >> substring;
    std::vector<std::string> result;
    for(string s : strings){
        if(isSubstring(s, substring))
            result.push_back(s);
    }
    std::cout << "Resultant strings: ";
    for(string str : result)
        std::cout << str << " ";
    return 0;
}