```cpp
#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

bool issame(vector<string> a,vector<string>b){
    return a == b;
}

vector<vector<string>> sorted_list_sum(vector<string> lst) {
    map<char,int> mp; // frequency map of characters
    for(auto &s:lst)
        for(char c : s) 
            ++mp[c];
    vector<vector<string>> res;
    for(const auto& pair:mp)
        if(pair.second > 1) {
            string key = "{";
            for(int i=0; i<pair.second-1; i++)
                key += "c"; // append 'c' (character) to the key
            key += "}";
            res.push_back({{pair.first, key}});
        }
    return res;
}

int main() {
    vector<string> lst = {"a", "b", "c", "a", "c"};
    vector<vector<string>> result = sorted_list_sum(lst);
    
    for(auto &v : result) {
        cout << v[0] << ": " << v[1] << endl;
    }
    
    return 0;
}