#include <iostream>
#include <vector>

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;

}

int main() {
    std::vector<std::string> strings = {"abc", "abcd", "def", "abcdef"};
    std::string prefix = "ab";
    
    auto output = filter_by_prefix(strings, prefix);

    for(const auto& str : output) {
        std::cout << str << std::endl;
    }
    return 0; 
}