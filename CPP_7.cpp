#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool is_same(std::string a, std::string b){
    return a == b;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> strings = {"apple", "banana", "orange", "grape"};
    std::string sub = "an";
    
    std::vector<std::string> filtered_strings = filter_by_substring(strings, sub);

    assert(is_same(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), std::vector<std::string>{"grunt", "prune"}));

    for (const std::string& str : filtered_strings) {
        if (str.find(sub) != std::string::npos) {
            std::cout << str << " contains substring " << sub << std::endl;
        }
    }
    
    return 0;
}