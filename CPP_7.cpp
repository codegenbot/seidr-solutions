#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> a,vector<string>b){
    return a.size() == b.size() && all_of(a.begin(),a.end(),[&b](string s){return find(b.begin(),b.end(),s) != b.end();});
}

vector<vector<string>> filter_by_substring(vector<vector<string>> strings, string substring){
    vector<vector<string>> result;
    for(auto &s : strings) {
        bool same = issame(s, {substring});
        if(same) {
            result.push_back({substring});
        } else {
            vector<string> filtered_strings;
            for(string ss : s) {
                if(ss.find(substring) != string::npos) {
                    filtered_strings.push_back(ss);
                }
            }
            if(filtered_strings.size() > 0) {
                result.push_back(filtered_strings);
            }
        }
    }
    return result;
}

int main(){
    vector<vector<string>> input = {{"hello world", "goodbye world", "world"}, {"hello us", "goodbye us", "us"}};
    string target = "world";
    auto output = filter_by_substring(input, target);
    
    for(auto &s : output) {
        for(auto ss : s) {
            cout << ss << endl;
        }
    }

    return 0;
}