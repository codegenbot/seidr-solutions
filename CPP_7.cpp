#include <vector>
#include <string>
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
    assert(containSameStrings(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}