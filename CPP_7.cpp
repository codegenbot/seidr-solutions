```
#include <iostream>
#include <vector>
#include <string>

bool isSame(string s1, string s2) {
    if (s1.length() != s2.length())
        return false;
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != s2[i])
            return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (std::string s : strings) {
        if (s.find(substring) != std::string::npos)
            result.push_back(s);
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::string> strings(n);
    for (int i = 0; i < n; i++) {
        std::cin >> strings[i];
    }

    std::string substring;
    std::cin >> substring;

    std::vector<std::string> filtered_strings = filter_by_substring(strings, substring);

    for (std::string s : filtered_strings) {
        bool is_match = true;
        for (int i = 0; i < n - 1; i++) {
            if (!isSame(s, strings[i])) {
                is_match = false;
                break;
            }
        }
        if (is_match)
            std::cout << s << " ";
    }

    return 0;
}