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

    if(sorted_list_sum(lst).size() == 0){
        cout << "Sorted List Sum: ";
        for(auto &s : lst){
            cout << s << ", ";
        }
        cout << endl;
    }else{
        for (auto &v : sorted_list_sum(lst)) { 
            cout << v[0] << ": " << v[1] << endl;
        }
    }

    return 0;
}