#include <iostream>
#include <vector>
#include <cassert>

vector<string> filter_by_substring(vector<string> strings, string substring);

int main() {
    assert(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") == vector<string>{"grunt", "prune"});
    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> filtered_strings;
    for(auto str : strings){
        if(str.find(substring) != string::npos){
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings;
}