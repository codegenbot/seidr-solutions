#include <iostream>
#include <vector>
#include <string>

bool isSame(const std::string& s1, const std::string& s2) {
    if (s1.size() != s2.size()) return false;
    for (size_t i = 0; i < s1.size(); ++i) {
        if (s1[i] != s2[i]) return false;
    }
    return true;
}

int main() {
    std::vector<std::string> strings;
    std::cout << "Enter the number of strings: ";
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::string s;
        std::cout << "Enter string " << i + 1 << ": ";
        std::getline(std::cin, s);
        strings.push_back(s);
    }
    
    int m;
    std::cout << "Enter the number of substrings: ";
    std::cin >> m;
    for (int i = 0; i < m; ++i) {
        std::string substring;
        std::cout << "Enter substring " << i + 1 << ": ";
        std::getline(std::cin, substring);
        
        std::vector<std::string> filteredStrings = filter_by_substring(strings, substring);
        
        if (filteredStrings.size() > 0) {
            std::cout << "Strings containing the substring '" << substring << "':\n";
            for (const auto& s : filteredStrings) {
                std::cout << s << "\n";
            }
            
            int sameCount = 0;
            for (const auto& s : filteredStrings) {
                if (isSame(s, substring)) {
                    ++sameCount;
                }
            }
            
            if (sameCount > 0) {
                std::cout << "Number of strings that are the same as the substring: " << sameCount << "\n";
            } else {
                std::cout << "No strings are the same as the substring.\n";
            }
        } else {
            std::cout << "No strings contain the substring '" << substring << "'.\n";
        }
    }
    
    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}