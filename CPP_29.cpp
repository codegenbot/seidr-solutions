#include <vector>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<vector<string>> filter_by_prefix(vector<vector<string>> strings) {
    vector<vector<string>> result;
    for(auto &s : strings){
        if(issame(s, {"a", "b"}))
            result.push_back(s);
    }
    return result;