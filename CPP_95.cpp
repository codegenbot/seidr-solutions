#include <map>
#include <string>

std::string toLower(const std::string& str) {
    // Implement toLower function to convert str to lowercase
}

std::string toUpper(const std::string& str) {
    // Implement toUpper function to convert str to uppercase
}

bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) {
        return false;
    }

    bool allLowerCase = true;
    bool allUpperCase = true;

    for (auto it = dict.begin(); it != dict.end(); ++it) {
        std::string key = it->first;

        if (key.empty()) {
            continue;
        }

        if (key != toLower(key)) {
            allLowerCase = false;
        }

        if (key != toUpper(key)) {
            allUpperCase = false;
        }

        if (!allLowerCase && !allUpperCase) {
            return false;
        }
    }

    return true;
}

int main() {
    assert(check_dict_case(std::map<std::string, std::string>()) == false);
    // Add more test cases to validate the implementation

    return 0;
}