#include <vector>
#include <string>

std::vector<std::vector<std::string>> filter_by_substring(const std::vector<std::vector<std::string>>& input, const std::vector<std::string>& sub) {
    std::vector<std::vector<std::string>> result;
    for (const auto& vec : input) {
        bool found = false;
        for (const auto& str : vec) {
            if (std::any_of(sub.begin(), sub.end(), [&](const auto& s){ return str.find(s) != std::string::npos; })) {
                found = true;
                result.push_back({sub});
                break;
            }
        }
        if (!found) {
            result.push_back({});
        }
    }
    return result;
}

int main() {
    std::vector<std::vector<std::string>> input = {{"grunt"}, {"trumpet"}, {"prune"}, {"gruesome"}};
    const std::vector<std::string> sub = {"run"};
    
    auto output = filter_by_substring(input, sub);
    
    if (!(output == std::vector<std::vector<std::string>>{{sub} ,{std::vector<std::string>()} ,{std::vector<std::string>()} ,{std::vector<std::string>()}}))
        return 1;
    
    input = {{"apple", "banana"}, {"orange", "grape"}, {"kiwi", "mango"}};
    sub = {"an"};
    auto output2 = filter_by_substring(input, sub);
    
    for (const auto& vec : output2) {
        for (const auto& str : vec) {
            std::cout << str << " ";
        }
        std::cout << std::endl;
    }
}