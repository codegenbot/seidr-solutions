#include <map>
#include <string>
using namespace std;

bool check_dict_case(const map<string, string>& dict) {
    if (dict.empty()) return false;

    bool all_lower = true;
    bool all_upper = true;

    for (const auto& entry : dict) {
        string key = entry.first;

        if (key.empty() || key.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") != string::npos) {
            return false;
        }

        if (all_lower && key.find_first_not_of("abcdefghijklmnopqrstuvwxyz") != string::npos) {
            all_lower = false;
        }
        
        if (all_upper && key.find_first_not_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") != string::npos) {
            all_upper = false;
        }
    }

    return all_lower || all_upper;
}

int main() {
    assert(check_dict_case({}) == false);
    // Add more test cases here

    return 0;
}