#include <vector>
#include <string>

std::vector<std::vector<std::string>> filter_by_substring(const std::vector<std::vector<std::string>>& input, const std::string& sub) {
    std::vector<std::vector<std::string>> result;
    for (const auto& vec : input) {
        bool found = false;
        std::vector<std::string> temp;
        for (const auto& str : vec) {
            if (str.find(sub) != std::string::npos) {
                found = true;
                temp.push_back(str);
                break;
            }
        }
        if (!found) {
            temp.clear();
        }
        result.push_back(temp);
    }
    return result;
}

int main() {
    std::vector<std::vector<std::string>> input = {{"grunt"}, {"trumpet"}, {"prune"}, {"gruesome"}};
    const std::string sub = "run";
    
    auto output = filter_by_substring(input, sub);
    
    if (!(output == std::vector<std::vector<std::string>> {{{"run"}} ,{{}} ,{{"prune"}} ,{{}} }))
        return 1;
    
    input = {{"apple", "banana"}, {"orange", "grape"}, {"kiwi", "mango"}};
    sub = "an";
    auto output2 = filter_by_substring(input, sub);
    
    for (const auto& vec : output2) {
        for (const auto& str : vec) {
            std::cout << str << " ";
        }
        std::cout << std::endl;
    }
}