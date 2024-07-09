```cpp
#include <vector>
#include <string>

bool issame(const vector<string>& a, const vector<string>& b) {
    if(a.size() != b.size()) return false;
    for(string s : a) {
        if(find(b.begin(), b.end(), s) == b.end())
            return false;
    }
    return true;
}

vector<string> filter_by_substring(const vector<string>& strings, const string& substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}

int main() {
    vector<string> strings = {"grunt", "trumpet", "prune", "gruesome"};
    string substring = "run";
    vector<string> filteredStrings = filter_by_substring(strings, substring);
    assert(issame(filteredStrings, {"grunt", "prune"}));
    return 0;
}