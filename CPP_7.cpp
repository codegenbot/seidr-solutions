#include <vector>
#include <string>

bool issame(vector<string> a,vector<string> b){
    return (a.size() == b.size()) && std::all_of(a.begin(), a.end(), [&b](const string& s) { return (find(b.begin(), b.end(), s) != b.end()); });
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}

int main() {
    assert (issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run") ,{"grunt", "prune"}));
    return 0;
}