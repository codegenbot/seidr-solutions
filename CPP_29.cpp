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
    int num_strings;
    std::cout << "Enter the number of strings: ";
    std::cin >> num_strings;

    std::vector<std::string> strings(num_strings);

    for (int i = 0; i < num_strings; ++i) {
        std::cout << "Enter string " << i + 1 << ": ";
        std::cin >> strings[i];
    }

    std::string prefix;
    std::cout << "Enter the prefix: ";
    std::cin >> prefix;

    auto filtered_strings = filter_by_prefix(strings, prefix);

    std::cout << "Filtered strings: ";
    for (const auto& str : filtered_strings) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    return 0;
}