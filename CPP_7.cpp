#include <iostream>
#include <vector>
#include <string>

bool issame(const std::string &a, const std::string &b) {
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(auto str : strings) {
        if(str.find(substring) == std::string::npos)
            result.push_back(str);
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
    std::string s;
    std::cin >> s;
    std::vector<std::string> filtered_strings = filter_by_substring(strings, s);
    for (const auto &str : filtered_strings) {
        std::cout << str << '\n';
    }
    return 0;
}