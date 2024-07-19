#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<vector<string>> sorted_list_sum(vector<string> lst) {
    map<string, int> mp;
    for (auto &s : lst)
        ++mp[s];
    
    vector<vector<string>> res;
    for (auto pair : mp) {
        string temp = pair.first;
        for(int i=0; i<stoi(pair.second.c_str())-1; i++)
            temp += "c";
        res.push_back({{temp, pair.second}});
    }
    return res;
}

int main() {
    vector<string> lst = {"a", "b", "c", "a", "c"};
    vector<vector<string>> result = sorted_list_sum(lst);
    
    for (auto &v : result) {
        cout << v[0] << ": " << v[1] << endl;
    }
    
    return 0;
}