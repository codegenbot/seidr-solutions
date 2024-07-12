#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string>b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a==b;
}

vector<vector<string>> groupStrings(vector<string>& strings) {
    unordered_map<string, vector<string>> mp;
    for (string str : strings) {
        if (!mp.count(str)) {
            mp[str] = {};
        }
        mp[str].push_back("[" + str + "] " + issame(mp, {str}) ? "IN" : "OUT");
    }
    return vector<vector<string>>(mp.begin(), mp.end());
}