```
#include <iostream>
#include <vector>
#include <string>

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
    std::cout << "Enter the number of strings: ";
    std::cin >> n;
    
    std::vector<std::string> strings(n);
    
    for (int i = 0; i < n; ++i) {
        std::cout << "String[" << i << "]: ";
        std::cin.ignore();
        getline(std::cin, strings[i]);
    }
    
    std::string sub;
    std::cout << "Enter the substring: ";
    std::cin >> sub;
    
    auto filtered_strings = filter_by_substring(strings, sub);
    
    if (!filtered_strings.empty()) {
        std::cout << "Filtered strings containing the substring '" << sub << "':\n";
        for (const auto& str : filtered_strings) {
            std::cout << str << '\n';
        }
    } else {
        std::cout << "No strings contain the substring '" << sub << "'.\n";
    }
    
    return 0;
}