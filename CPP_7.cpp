#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> strings;
    std::cout << "Enter the number of strings: ";
    int n;
    std::cin >> n;
    
    for(int i=0; i<n; i++) {
        std::string str;
        std::cout << "Enter string #"<<i+1<<": ";
        std::getline(std::cin, str);
        strings.push_back(str);
    }
    
    std::string substring;
    std::cout << "Enter the substring: ";
    std::cin >> substring;
    
    std::vector<std::string> filtered = filter_by_substring(strings, substring);
    
    if(filtered.empty()) {
        std::cout << "No strings contain the given substring." << std::endl;
    } else {
        std::cout << "Strings that contain the given substring: ";
        for(const auto& str : filtered) {
            std::cout << str << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}