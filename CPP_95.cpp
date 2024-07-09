#include <iostream>
#include <map>
#include <string>
#include <cctype>
using namespace std;

bool check_dict_case(const map<string, string>& dict) {
    if (dict.empty()) return false;
    
    bool all_lower = true;
    bool all_upper = true;
    
    for (const auto& pair : dict) {
        for (char c : pair.first) {
            if (islower(c)) {
                all_upper = false;
            } else if (isupper(c)) {
                all_lower = false;
            }
        }
    }
    
    return all_lower || all_upper;
}