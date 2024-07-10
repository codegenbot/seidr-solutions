#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool check_dict_case(const unordered_map<string, int>& dict) {
    if(dict.empty()) return false;

    bool lower = true, upper = true;
    for(auto const& entry : dict) {
        if(entry.first.empty() || !isalpha(entry.first[0])) return false;
        if(islower(entry.first[0])) upper = false;
        if(isupper(entry.first[0])) lower = false;
    }

    return lower || upper;
}

int main() {
    assert(check_dict_case({}) == false);
}