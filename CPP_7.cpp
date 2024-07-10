```cpp
#include <vector>
#include <string>

std::vector<std::vector<std::string>> filter_by_substring(const std::vector<std::vector<std::string>>& input, const std::string& sub) {
    std::vector<std::vector<std::string>> result;
    for (const auto& vec : input) {
        bool found = false;
        for (const auto& str : vec) {
            if (str.find(sub) != std::string::npos) {
                found = true;
                result.push_back({{sub}});
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
    std::vector<std::string> expected = {"grunt", "prune"};
    auto output = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    
    for (size_t i = 0; i < output.size(); ++i) {
        if (output[i].size() != expected[i].size()) {
            std::cerr << "Test failed. Expected: " << expected << ". Got: " << output << std::endl;
            return 1;
        }
        for (size_t j = 0; j < output[i].size(); ++j) {
            if (output[i][j] != expected[i][j]) {
                std::cerr << "Test failed. Expected: " << expected << ". Got: " << output << std::endl;
                return 1;
            }
        }
    }
    
    auto expected = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    for (size_t i = 0; i < expected.size(); ++i) {
        if (expected[i].size() != 1) {
            std::cerr << "Test failed. Expected: " << expected << ". Got: " << output << std::endl;
            return 1;
        }
    }
    
    // If you reach this point, the test passed
    std::cout << "Test passed." << std::endl;

    std::vector<std::vector<std::string>> input = {{"apple", "banana"}, {"orange", "grape"}, {"kiwi", "mango"}};
    const std::string sub = "an";
    auto output2 = filter_by_substring(input, sub);
    
    for (const auto& vec : output2) {
        for (const auto& str : vec) {
            std::cout << str << " ";
        }
        std::cout << std::endl;
    }
}