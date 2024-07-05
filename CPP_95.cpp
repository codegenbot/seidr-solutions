#include <map>
#include <string>
#include <cctype>

bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) return false;

    bool isLower = islower(dict.begin()->first[0]);
    for (const auto& pair : dict) {
        for (char c : pair.first) {
            if (isLower && !islower(c)) return false;
            if (!isLower && !isupper(c)) return false;
        }
    }
    return true;
}

int main() {
    // Test cases to validate the code
    std::map<std::string, std::string> test1 = {{"apple", "fruit"}, {"banana", "fruit"}};
    std::map<std::string, std::string> test2 = {{"Apple", "fruit"}, {"Banana", "fruit"}};
    std::map<std::string, std::string> test3 = {{"apple", "fruit"}, {"Banana", "fruit"}};
    std::map<std::string, std::string> test4 = {{"Apple", "fruit"}, {"banana", "fruit"}};
    
    std::cout << check_dict_case(test1) << std::endl; // Expected: true
    std::cout << check_dict_case(test2) << std::endl; // Expected: true
    std::cout << check_dict_case(test3) << std::endl; // Expected: false
    std::cout << check_dict_case(test4) << std::endl; // Expected: false

    return 0;
}