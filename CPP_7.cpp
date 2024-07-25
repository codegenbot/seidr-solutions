#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) 
        return false;
        
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    
    return true;
}

vector<vector<string>> filter_by_substring(vector<vector<string>> strings, string substring) {
    vector<vector<string>> result;
    for (const auto& s : strings) {
        if (std::count(s.begin(), s.end(), substring) > 0)
            result.push_back(s);
    }
    return result;
}

int main() {
    vector<vector<string>> strings = {{"grunt", "trumpet", "prune", "gruesome"}, {"hello", "world"}};
    string substring = "run";
    vector<vector<string>> filteredStrings = filter_by_substring(strings, substring);
    
    for (const auto& s : filteredStrings) {
        if(issame(s, {"grunt", "prune"})) {
            // remove this line
        }
    }
    
    return 0;
}