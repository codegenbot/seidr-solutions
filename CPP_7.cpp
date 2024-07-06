```
#include <vector>
#include <string>

int main() {
    vector<string> strings = {"grunt", "trumpet", "prune", "gruesome"};
    string substring = "run";
    vector<string> result = filter_by_substring(strings, substring);
    bool same = issame(result, {"grunt", "prune"});
    cout << "Result: " << (same ? "True" : "False") << endl;
    return 0;
}

bool issame(vector<string> a,vector<string>b){
    if(a.size() != b.size())
        return false;
    for(int i = 0; i<a.size();i++)
        if(find(b.begin(),b.end(),a[i]) == b.end())
            return false;
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings) {
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;