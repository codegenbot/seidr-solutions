#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(find(b.begin(), b.end(), a[i]) == b.end()) return false;
    }
    return true;
}

vector<vector<string>> filter_by_substring(vector<vector<string>> strings, string substring){
    vector<vector<string>> result;
    for (const auto& s : strings) {
        bool same = issame(s, vector<string>({""}));
        if (!same || s.size() > 0 && s[0].find(substring) != string::npos) {
            result.push_back(s);
        }
    }
    return result;
}

int main(){
    // Your test code here
    vector<vector<string>> strings = {{"apple", "banana"}, {"hello", "world"}, {"sub", "substring"}};
    string substring = "sub";
    vector<vector<string>> result = filter_by_substring(strings, substring);
    for (const auto& s : result) {
        cout << "[";
        for (int i = 0; i < s.size(); i++) {
            cout << s[i];
            if (i < s.size() - 1) cout << ", ";
        }
        cout << "]\n";
    }

    return 0;
}