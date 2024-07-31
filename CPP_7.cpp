#include <memory>

#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    for (const auto& s : a) {
        if (!std::count(b.begin(), b.end(), ::tolower(s))) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> strings;
    for (int i = 0; i < n; ++i) {
        std::string s;
        std::cin >> s;
        strings.emplace_back(s);
    }
    std::string substring;
    std::cin >> substring;

    std::vector<std::string> list = { "grunt", "prune" };
    if (!issame(strings, list)) {
        assert(false);
    }

    std::vector<std::string> result = filter_by_substring(strings, substring);

    for (const auto& s : result) {
        std::cout << s << "\n";
    }

    return 0;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<string> result; 
    result.reserve(strings.size()); // Reserve space for elements
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}