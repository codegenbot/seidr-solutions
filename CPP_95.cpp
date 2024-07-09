```cpp
#include <iostream>
#include <map>
#include <string>

bool check_dict_case(map<string, string> dict) {
    for (auto& p : dict) {
        if (std::toupper(p.first[0]) != std::toupper(first_key[0])) {
            return false;
        }
    }
    return true;
}

int main() {
    map<string, string> dict;
    std::string first_key;

    std::cout << "Enter a series of key-value pairs (e.g., 'name:John'): ";
    while (true) {
        string line, key, value;
        cin >> line;
        if (line.empty()) break;  // End of input

        size_t colon = line.find(':');
        if (colon == string::npos || line.size() < 2) {
            std::cout << "Invalid format. Please use 'key:value'." << endl;
            continue;
        }

        key = line.substr(0, colon);
        value = line.substr(colon + 1);
        dict[key] = value;

        if (dict.empty()) {
            first_key = key;
        } else if (std::toupper(first_key[0]) != std::toupper(key[0])) {
            std::cout << "Error: Dictionary case mismatch." << endl;
            return 1;  // Exit with error code
        }
    }

    if (!check_dict_case(dict)) {
        std::cout << "Error: Dictionary is not in the same case." << endl;
    } else {
        std::cout << "Dictionary is consistent in case." << endl;
    }
}