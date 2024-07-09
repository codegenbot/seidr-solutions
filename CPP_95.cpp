```cpp
#include <map>
#include <string>

int main() {
    std::map<std::string, std::string> dict;

    while (true) {
        std::cout << "Enter a key-value pair (or 'q' to quit): ";
        std::string key, value;
        std::cin >> key >> value;
        if (key == "q") break;
        dict.insert({key, value});
    }

    bool result = check_dict_case(dict);
    if (result) {
        std::cout << "All keys are either all upper case or all lower case." << std::endl;
    } else {
        std::cout << "Not all keys follow the rule." << std::endl;
    }
    return 0;
}

bool check_dict_case(map<string, string> dict) {
    if (dict.empty()) return false;

    bool allUpper = true;
    bool allLower = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        if (!allUpper && !allLower) break;
        if (allUpper) allUpper = std::find_if(it->first.begin(), it->first.end(),
            [](char c){ return tolower(c) != c; }).base() == &it->first[0];
        if (allLower) allLower = std::find_if(it->first.begin(), it->first.end(),
            [](char c){ return toupper(c) != c; }).base() == &it->first[0];
    }

    return allUpper && allLower;
}