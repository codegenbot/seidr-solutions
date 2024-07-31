#include <map>
#include <string>
#include <iostream> // if input is needed

using namespace std;

bool check_dict_case(const map<string, string>& dict) {
    if (dict.empty()) return false;

    bool all_lowercase = true;
    bool all_uppercase = true;

    for (const auto& pair : dict) {
        string key = pair.first;

        for (char c : key) {
            if (islower(c)) {
                all_uppercase = false;
            } else if (isupper(c)) {
                all_lowercase = false;
            }
        }
    }

    return all_lowercase || all_uppercase;
}