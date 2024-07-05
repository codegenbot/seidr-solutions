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
    return 0;
}