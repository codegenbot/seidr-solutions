#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> strings) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if(str.length() > 1) {
            result.push_back(str);
        }
    }
    return !result.empty();
}

int main() {
    std::vector<std::string> strings = {"hello", "world", "", "abc", ""};
    bool same = issame(strings);
    if(same)
        std::cout << "All strings are same" << std::endl;
    else
        std::cout << "Strings are not all the same" << std::endl;

    return 0;
}