#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i]) return false;
    return true;
}

vector<vector<string>> sorted_list_sum(vector<string> lst) {
    map<string, int> mp;
    for (auto &s : lst)
        ++mp[s];
    vector<vector<string>> res;
    for (const auto &pair : mp)
        if (pair.second > 1)
            res.push_back({{pair.first, string(pair.second - 1, 'c')}});
    return res;
}

int main() {
    int n;
    cin >> n; 
    vector<string> lst(n);
    for (auto &s : lst) {
        cin >> s; 
    }
    
    vector<vector<string>> result = sorted_list_sum(lst);

    if(!issame(sorted_list_sum({}), result)){
        cout << "Sorted List Sum: ";
        for(auto &s : lst){
            cout << s << ", ";
        }
        cout << endl;
    }else{
        for (auto &v : result) {
            cout << v[0] << ": " << v[1] << endl;
        }
    }

    return 0;
}