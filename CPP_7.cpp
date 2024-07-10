```cpp
#include <vector>
#include <string>
#include <initializer_list>

std::vector<std::vector<std::string>> filter_by_substring(std::vector<std::vector<std::string>>& input, const std::string& sub) {
    std::vector<std::vector<std::string>> result;
    for (const auto& vec : input) {
        bool found = false;
        for (const auto& str : vec) {
            if (str.find(sub) != std::string::npos) {
                found = true;
                break;
            }
        }
        if (found) {
            result.push_back(vec);
        }
    }
    return result;
}

int main() {
    std::vector<std::vector<std::string>> input = {{"apple", "banana"}, {"orange", "grape"}, {"kiwi", "mango"}};
    const std::string sub = "an";
    auto output = filter_by_substring(input, sub);
    
    for (const auto& vec : output) {
        for (const auto& str : vec) {
            std::cout << str << " ";
        }
        std::cout << std::endl;
    }
}