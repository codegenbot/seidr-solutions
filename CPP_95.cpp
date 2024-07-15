#include <iostream>
#include <unordered_map>
#include <cctype>
#include <cassert>

using namespace std;

unordered_map<string, int> dict;

bool check_dict_case(const unordered_map<string, int>& dict) {
    if(dict.empty()) return false;

    bool all_lower = true;
    bool all_upper = true;

    for(const auto& pair : dict) {
        string key = pair.first;
        bool is_lower = true;
        bool is_upper = true;

        for(char c : key) {
            if(islower(c)) {
                is_upper = false;
            } else if(isupper(c)) {
                is_lower = false;
            }
        }

        if(!is_lower) all_lower = false;
        if(!is_upper) all_upper = false;
    }

    return all_lower || all_upper;
}

int main() {
    assert(check_dict_case({}) == false);

    return 0;
}