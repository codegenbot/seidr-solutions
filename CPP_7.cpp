```cpp
#include <vector>
#include <string>
#include <algorithm>

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

int main() {
    vector<string> strings = {"grunt", "trumpet", "prune", "gruesome"};
    string substring = "run";
    vector<string> expected = {"grunt", "prune"};
    assert (issame(filter_by_substring(strings, substring) ,expected));
    return 0;
}