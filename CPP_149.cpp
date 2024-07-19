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
    map<string,int> mp;
    for(auto &s:lst)
        ++mp[s];
    vector<vector<string>> res;
    for(auto p:mp)
        if(p.second > 1) {
            vector<string> temp = {{p.first, string(p.second-1,'c')}};
            res.push_back(temp);
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