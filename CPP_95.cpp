```cpp
#include <iostream>
#include <map>
#include <string>

bool check_dict_case(const std::map<std::string, std::string>& dict) {
    if (dict.empty()) {
        return true;
    }

    std::string first_key = dict.begin()->first;
    for (const auto& pair : dict) {
        if (std::toupper(first_key[0]) != std::toupper(pair.first[0])) {
            return false;
        }
    }

    return true;
}

int main() {
    std::map<std::string, std::string> dict;
    std::string first_key;

    std::cout << "Enter a series of key-value pairs (e.g., 'name:John'): ";
    while (true) {
        std::string line, key, value;
        std::cin >> line;
        if (line.empty()) break;  // End of input

        size_t colon = line.find(':');
        if (colon == std::string::npos || line.size() < 2) {
            std::cout << "Invalid format. Please use 'key:value'." << std::endl;
            continue;
        }

        key = line.substr(0, colon);
        value = line.substr(colon + 1);
        dict[key] = value;

        if (dict.empty()) {
            first_key = key;
        } else if (std::toupper(first_key[0]) != std::toupper(key[0])) {
            std::cout << "Error: Dictionary case mismatch." << std::endl;
            return 1;  // Exit with error code
        }
    }

    if (!check_dict_case(dict)) {
        std::cout << "Error: Dictionary is not in the same case." << std::endl;
    } else {
        std::cout << "Dictionary is consistent in case." << std::endl;
    }

    return 0;
}