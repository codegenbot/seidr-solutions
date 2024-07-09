```cpp
#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> a,vector<string>b){
    return a.size() == b.size() && all_of(a.begin(),a.end(),[&b](string s){return find(b.begin(),b.end(),s) != b.end();});
}

vector<vector<string>> filter_by_substring(vector<vector<string>> strings, string substring){
    vector<vector<string>> result;
    for(vector<string> v : strings) {
        bool same = false;
        for(vector<string> w : result) {
            if(issame(v,w)) {
                same = true;
                break;
            }
        }
        if(!same) {
            for(string s : v) {
                if(s.find(substring) != string::npos) {
                    vector<string> temp;
                    temp.push_back(s);
                    bool exist = false;
                    for(vector<string> w : result) {
                        if(issame(temp,w)) {
                            exist = true;
                            break;
                        }
                    }
                    if(!exist) {
                        result.push_back(v);
                        break;
                    }
                }
            }
        }
    }
    return result;
}