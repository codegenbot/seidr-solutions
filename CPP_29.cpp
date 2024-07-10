#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0)
            result.push_back(str);
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    std::vector<std::string> strings;
    for(int i = 0; i < n; i++) {
        std::string str;
        std::cout << "Enter string " << (i+1) << ": ";
        std::cin >> str;
        strings.push_back(str);
    }

    std::string prefix;
    std::cout << "Enter the prefix: ";
    std::cin >> prefix;

    std::vector<std::string> filtered_strings = filter_by_prefix(strings, prefix);

    if(filtered_strings.size() == 0) {
        std::cout << "No strings found with the given prefix." << std::endl;
    } else {
        std::cout << "Strings found with the given prefix: ";
        for(const auto& str : filtered_strings) {
            std::cout << str << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}