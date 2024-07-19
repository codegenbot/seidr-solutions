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
    for(const auto& pair:mp)
        if(pair.second > 1)
            res.push_back({{pair.first, string(pair.second-1,'c')}});
    return res;
}

vector<string> get_input() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    vector<string> lst(n);
    for(int i=0; i<n; ++i) {
        cin >> lst[i];
    }
    return lst;
}

int main() {
    vector<string> lst = get_input();
    
    vector<vector<string>> result = sorted_list_sum(lst);
    
    for(auto &v : result) {
        cout << v[0] << ": " << v[1] << endl;
    }
    
    return 0;
}