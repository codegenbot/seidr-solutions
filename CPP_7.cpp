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
    auto output = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    
    bool resultEqual = true;
    for (size_t i = 0; i < output.size(); ++i) {
        if (output[i].size() != 1 || (output[i][0] != "grunt" && output[i][0] != "prune")) {
            resultEqual = false;
        }
    }
    
    if (!resultEqual) {
        std::cerr << "Test failed. Expected: {\"grunt\"}, {\"prune\"}. Got: " << output << std::endl;
        return 1;
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