#include <iostream>
#include <vector>
#include <algorithm>

bool containSameStrings(vector<string> a, vector<string> b) {
    return a.size() == b.size() && std::all_of(a.begin(), a.end(), [&](const string& s) { 
        return find(b.begin(), b.end(), s) != b.end(); 
    });
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(const auto& str : strings){
        if(str.find(substring) != string::npos){
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> input = {"grunt", "trumpet", "prune", "gruesome"};
    string sub = "run";
    vector<string> expected = {"grunt", "prune"};

    vector<string> output = filter_by_substring(input, sub);
    assert(containSameStrings(output, expected));
    
    return 0;
}