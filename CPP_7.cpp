#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if(str.find(substring) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> strings(n);
    for (auto& s : strings) {
        std::cin >> s;
    }

    std::string substring;
    std::cin >> substring;

    auto filtered_strings = filter_by_substring(strings, substring);

    if(filtered_strings.empty()) {
        std::cout << "No strings contain the given substring." << std::endl;
    } else {
        for (const auto& str : filtered_strings) {
            std::cout << str << std::endl;
        }
    }

    return 0;
}