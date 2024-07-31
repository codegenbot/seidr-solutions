```cpp
#include <vector>
#include <iostream>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (const auto& s : strings) {
        if (s.find(substring) != std::string::npos) {
            result.push_back(s);
        }
    }
    return result;
}

int solution(int numStrings) {
    int n;
    std::cin >> n;

    std::vector<std::string> strings;
    for (int i = 0; i < n; ++i) {
        std::string s;
        std::getline(std::cin, s); 
        strings.push_back(s);
    }

    std::string substring;
    std::getline(std::cin, substring);

    std::vector<std::string> result1 = filter_by_substring(strings, substring);
    std::vector<std::string> result2 = filter_by_substring(strings, substring);

    if (issame(result1, result2)) {
        for (const auto& s : result1) {
            std::cout << s << std::endl;
        }
    } else {
        std::cout << "No common elements found." << std::endl;
    }

    return 0;
}