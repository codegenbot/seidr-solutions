```cpp
#include <iostream>
#include <vector>
#include <string>

bool isSame(const std::string& s1, const std::string& s2) {
    if (s1.size() != s2.size())
        return false;
    for (int i = 0; i < s1.size(); ++i)
        if (s1[i] != s2[i])
            return false;
    return true;
}

int main() {
    std::vector<std::string> strings;
    std::cout << "Enter the number of strings: ";
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter string " << i + 1 << ": ";
        std::string s;
        std::cin >> s;
        strings.push_back(s);
    }
    
    std::cout << "Enter the substring: ";
    std::string substring;
    std::cin >> substring;

    std::vector<std::string> result = filter_by_substring(strings, substring);

    for (const auto& str : result)
        std::cout << str << "\n";
    
    return 0;
}

std::vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}