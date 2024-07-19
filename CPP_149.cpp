#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

vector<vector<string>> sorted_list_sum(vector<string> lst) {
    map<string, int> mp;
    for (auto &s : lst)
        ++mp[s];
    vector<vector<string>> res;
    for (const auto &pair : mp) {
        if (pair.second > 1) {
            string s = pair.first + ": " + string(pair.second - 1, 'c');
            res.push_back({{s}});
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n; 
    vector<string> lst;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        lst.push_back(s);
    }
    
    if(sorted_list_sum(lst).size() == 0){
        cout << "Sorted List Sum: ";
        for(auto &s : lst){
            cout << s << ", ";
        }
        cout << endl;
    }else{
        vector<vector<string>> result = sorted_list_sum(lst);
        for (auto &v : result) { 
            cout << v[0] << endl;
        }
    }

    return 0;
}