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
    std::map<std::string, std::string> test_case1 = {{"key", "value"}, {"anotherkey", "anothervalue"}};
    std::map<std::string, std::string> test_case2 = {{"Key", "value"}, {"AnotherKey", "anothervalue"}};
    std::map<std::string, std::string> test_case3 = {{"key", "value"}, {"AnotherKey", "anothervalue"}};
    std::map<std::string, std::string> test_case4 = {};

    std::cout << std::boolalpha;
    std::cout << "Test Case 1: " << check_dict_case(test_case1) << "\n"; // Should return true
    std::cout << "Test Case 2: " << check_dict_case(test_case2) << "\n"; // Should return true
    std::cout << "Test Case 3: " << check_dict_case(test_case3) << "\n"; // Should return false
    std::cout << "Test Case 4: " << check_dict_case(test_case4) << "\n"; // Should return false

    return 0;
}