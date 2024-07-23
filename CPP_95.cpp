#include <string>
#include <map>
#include <cctype>

bool check_dict_case(map<string, string> dict) {
    bool all_lower = true;
    bool all_upper = true;

    for (auto& pair : dict) {
        if (!all_lower || !all_upper) break;
        if (!pair.first.empty() && !islower(pair.first[0])) {
            all_lower = false;
        }
        if (!pair.first.empty() && !isupper(pair.first[0])) {
            all_upper = false;
        }
    }

    return dict.empty() ? false : (all_lower || all_upper);
}