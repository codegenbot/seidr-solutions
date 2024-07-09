#include <map>
#include <string>

int main() {
    std::map<std::string, std::string> dict;

    int n;
    std::cout << "Enter the number of key-value pairs: ";
    std::cin >> n;

    for(int i=0; i<n; ++i) {
        std::string key, value;
        std::cout << "Enter key " << i+1 << ": ";
        std::getline(std::cin, key);
        std::cout << "Enter value for " << key << ": ";
        std::getline(std::cin, value);
        dict.insert({key, value});
    }

    bool result = check_dict_case(dict);

    if(result)
        std::cout << "The dictionary has both upper and lower case keys." << std::endl;
    else
        std::cout << "The dictionary does not have both upper and lower case keys." << std::endl;

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