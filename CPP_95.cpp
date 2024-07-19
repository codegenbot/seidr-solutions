#include <iostream>
#include <map>
#include <string>
#include <cctype>
#include <cassert>

using namespace std;

bool check_dict_case(const map<string, string>& dict) {
    if (dict.empty()) return false;

    bool all_lowercase = true;
    bool all_uppercase = true;

    for (const auto& pair : dict) {
        for (char c : pair.first) {
            if (islower(c)) {
                all_uppercase = false;
            } else if (isupper(c)) {
                all_lowercase = false;
            }
        }
    }

    return all_lowercase || all_uppercase;
}

int main() {
    assert(check_dict_case({}) == false);
    return 0;
}