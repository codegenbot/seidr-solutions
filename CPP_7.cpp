#include <iostream>
#include <vector>
#include <string>

bool isSame(const std::string& s1, const std::string& s2) {
    if (s1.length() != s2.length())
        return false;
    for (int i = 0; i < s1.length(); ++i)
        if (s1[i] != s2[i])
            return false;
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(substring) != std::string::npos)
            result.push_back(s);
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> strings;
    for (int i = 0; i < n; ++i) {
        std::string s;
        std::cin >> s;
        strings.push_back(s);
    }
    std::cout << "Enter a substring: ";
    std::string substring;
    std::cin >> substring;
    
    std::vector<std::string> filtered = filter_by_substring(strings, substring);

    if (filtered.size() == 0) {
        std::cout << "No strings contain the given substring." << std::endl;
    } else {
        for (const auto& s : filtered)
            std::cout << s << std::endl;
        
        bool same = isSame(substring, filtered[0]);
        if(same) {
            for (int i = 1; i < filtered.size(); ++i)
                if (!isSame(substring, filtered[i])) {
                    std::cout << "The first string is not the same as other strings." << std::endl;
                    break;
                }
            else
                std::cout << "All strings are the same." << std::endl;
        } else {
            for (int i = 1; i < filtered.size(); ++i)
                if (!isSame(substring, filtered[i])) {
                    std::cout << "The first string is not the same as other strings." << std::endl;
                    break;
                }
            else
                std::cout << "All strings are the same." << std::endl;
        }
    }

    return 0;
}