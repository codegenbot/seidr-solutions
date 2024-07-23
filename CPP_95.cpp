#include <string>
#include <cctype>

bool check_dict_case(const std::vector<std::pair<std::string, int>>& dict) {
    bool allLower = true;
    bool allUpper = true;

    for (const auto& pair : dict) {
        if (!std::all_of(pair.first.begin(), pair.first.end(),
                         ::islower)) allLower = false;
        if (!std::all_of(pair.first.begin(), pair.first.end(),
                         ::isupper)) allUpper = false;
    }

    return allLower && !allUpper || !allLower && allUpper;
}

int main() {
    std::vector<std::pair<std::string, int>> dict;
    // Add elements to the vector if you want
    assert(check_dict_case(dict) == false);
    return 0;
}