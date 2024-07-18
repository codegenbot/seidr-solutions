#include <iostream>
#include <unordered_map>
#include <cctype>

bool check_dict_case(const std::unordered_map<std::string, int>& dict) {
    if(dict.empty()) return false;
    bool all_lowercase = true;
    bool all_uppercase = true;
    for(auto const& pair : dict) {
        if(pair.first != tolower(pair.first[0])) {
            all_lowercase = false;
        }
        if(pair.first != toupper(pair.first[0])) {
            all_uppercase = false;
        }
    }
    return all_lowercase || all_uppercase;
}

int main() {
    // Initialize the dictionary (dict) with values
    std::unordered_map<std::string, int> dict = {{"Apple", 5}, {"banana", 3}, {"CHERRY", 2}};

    // Call the function with the dictionary
    bool result = check_dict_case(dict);

    // Output the result
    std::cout << (result ? "Dictionary contains all lowercase or all uppercase keys." : "Dictionary contains mixed case keys.") << std::endl;

    return 0;
}