```
#include <vector>
#include <string>
#include <initializer_list>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (auto s : a) if (find(b.begin(),b.end(),s) == b.end()) return false;
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto str : strings){
        if(str.find(substring) != string::npos)
            result.push_back(str);
    }
    return result;

}
int main() {
    vector<string> strings = {"grunt", "trumpet", "prune", "gruesome"};
    assert(issame(filter_by_substring(strings, "run"),{"grunt","prune"}));
    return 0;
}