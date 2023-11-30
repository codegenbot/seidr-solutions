#include <iostream>
#include <map>
#include <string>
#include <cctype>

bool check_map_case(const std::map<std::string, std::string>& dict) {
    if (dict.empty()) {
        return false;
    }
    bool isLower = std::islower(dict.begin()->first[0]);
    for (const auto& entry : dict) {
        if (std::islower(entry.first[0]) != isLower) {
            return false;
        }
    }
    return true;
}

int main() {
    std::map<std::string, std::string> dict = {{"a", "apple"}, {"b", "banana"}};
    std::cout << std::boolalpha << check_map_case(dict) << std::endl;

    dict = {{"a", "apple"}, {"A", "banana"}, {"B", "banana"}};
    std::cout << std::boolalpha << check_map_case(dict) << std::endl;

    dict = {{"a", "apple"}, {"8", "banana"}, {"a", "apple"}};
    std::cout << std::boolalpha << check_map_case(dict) << std::endl;

    dict = {{"Name", "John"}, {"Age", "36"}, {"City", "Houston"}};
    std::cout << std::boolalpha << check_map_case(dict) << std::endl;

    dict = {{"STATE", "NC"}, {"ZIP", "12345"}};
    std::cout << std::boolalpha << check_map_case(dict) << std::endl;

    return 0;
}