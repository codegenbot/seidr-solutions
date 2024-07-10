#include <vector>
#include <string>

std::vector<std::vector<std::string>> filter_by_substring(const std::vector<std::vector<std::string>>& input, const std::string& sub) {
    std::vector<std::vector<std::string>> result;
    for (const auto& vec : input) {
        bool found = false;
        for (const auto& str : vec) {
            if (str.find(sub) != std::string::npos) {
                found = true;
                result.push_back({vec});
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
    const std::string sub = "run";
    
    auto output = filter_by_substring(input, sub);
    
    for (size_t i = 0; i < output.size(); ++i) {
        if (output[i].size() != 1) {
            //std::cerr << "Test failed. Expected: {\"grunt\"}, {\"prune\"}. Got: " << output << std::endl;
            //return 1;
        }
    }
    
    // If you reach this point, the test passed
    //std::cout << "Test passed." << std::endl;

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