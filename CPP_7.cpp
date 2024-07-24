#include <vector>
#include <string>

bool containSameStrings(vector<string> a, vector<string> b) {
    return a.size() == b.size() && std::all_of(a.begin(), a.end(), [&](const string& s) { 
        return find(b.begin(), b.end(), s) != b.end(); 
    });
}

int main() {
    vector<string> strings = {"grunt", "trumpet", "prune", "gruesome"};
    string substring = "run";
    vector<string> result = filter_by_substring(strings, substring);
    
    assert(containSameStrings(result, {"grunt", "prune"}));
    
    return 0;
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