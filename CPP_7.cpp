#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(auto str : a) {
        bool found = false;
        for(auto other_str : b) {
            if(str == other_str) {
                found = true; break;
            }
        }
        if(!found) return false;
    }
    return true;
}

int main() {
    vector<string> strings = {"grunt", "trumpet", "prune", "gruesome"};
    string substring = "run";
    vector<string> result = filter_by_substring(strings, substring);
    
    assert(issame(result ,{{"grunt","prune"}}));
    
    return 0;
}