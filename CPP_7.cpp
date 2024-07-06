#include <vector>
#include <string>

bool issame(vector<string>, vector<string>);
vector<string> filter_by_substring(vector<string>, string);

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
}

int main() {
    vector<string> a = {"grunt", "trumpet", "prune", "gruesome"};
    string substring = "run";
    vector<string> b = filter_by_substring(a, substring);
    assert (issame(b, vector<string>{"grunt", "prune"}));
    return 0;
}