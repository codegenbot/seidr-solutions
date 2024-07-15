#include <iostream>
#include <string>
#include <unordered_map>

bool check_dict_case(const std::unordered_map<std::string, int> &dict) {
    if (dict.empty()) {
        return false;
    }

    bool all_lower = true;
    bool all_upper = true;

    for (const auto &entry : dict) {
        const std::string &key = entry.first;

        if (!key.empty() && std::islower(key[0])) {
            all_upper = false;
        } else if (!key.empty() && std::isupper(key[0])) {
            all_lower = false;
        } else {
            return false;
        }
    }

    return all_lower || all_upper;
}

int main() {
    // Test cases
    assert(check_dict_case({}) == false);
    
    return 0;
}