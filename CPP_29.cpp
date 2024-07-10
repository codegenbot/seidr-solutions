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

int main() {
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    std::vector<std::string> strings(n);
    for(int i = 0; i < n; i++) {
        std::cout << "Enter string " << i+1 << ": ";
        std::getline(std::cin, strings[i]);
    }

    std::string prefix;
    std::cout << "Enter the prefix: ";
    std::cin >> prefix;

    std::vector<std::string> filtered_strings = filter_by_prefix(strings, prefix);

    if(filtered_strings.size() > 0) {
        std::cout << "Strings with the given prefix are: \n";
        for(const auto& str : filtered_strings)
            std::cout << str << "\n";
    } else
        std::cout << "No strings found with the given prefix.\n";

    return 0;
}