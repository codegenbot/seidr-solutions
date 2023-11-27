#include <map>
#include <string>

bool check_dict_case(std::map<std::string, std::string> dict) {
    if (dict.empty()) {
        return false;
    }

    bool all_lower = true;
    bool all_upper = true;

    for (auto const& pair : dict) {
        std::string key = pair.first;

        if (key.empty()) {
            return false;
        }

        for (char c : key) {
            if (islower(c)) {
                all_upper = false;
            }

            if (isupper(c)) {
                all_lower = false;
            }

            if (!all_lower && !all_upper) {
                return false;
            }
        }
    }

    return true;
}