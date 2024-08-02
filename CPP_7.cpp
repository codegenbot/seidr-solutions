#include <vector>
#include <string>

bool issame(vector<string> a, vector<string>b){
    return a.size() == b.size() && all_of(a.begin(), a.end(), [&](const string& s){return find(b.begin(), b.end(), s) != b.end();});
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto& str : strings) {
        if(str.find(substring) != string::npos)
            result.push_back(str);
    }
    return result;
}