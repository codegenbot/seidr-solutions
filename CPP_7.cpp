Here is the modified code with a main function:

```cpp
#include <vector>
#include <string>

int main() {
    std::vector<std::vector<std::string>> input = {{"apple", "banana", "cherry"}, {"date", "elderberry", "fig"}, {"grape", "honeydew", "ice cream"}};
    std::string sub = "e";
    
    std::vector<std::vector<std::string>> result = filter_by_substring(input, sub);
    
    for (const auto& vec : result) {
        for (const auto& str : vec) {
            std::cout << str << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}

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