#include <map>
#include <string>
#include <cctype>

bool check_dict_case(std::map<std::string, std::string> dict) {
    bool all_upper = true;
    bool all_lower = true;

    for(auto it = dict.begin(); it != dict.end(); ++it) {
        if(!all_lower && !all_upper)
            return false; // map contains both upper and lower case keys

        string key = it->first;
        if(all_lower && !islower(key[0]))
            all_lower = false;
        if(all_upper && !isupper(key[0]))
            all_upper = false;
    }

    return all_upper || all_lower;
}