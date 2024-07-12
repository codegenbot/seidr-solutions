#include <vector>
#include <string>
#include <bits/stdc++.h>

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0) {
            result.push_back(s);
        }
    }
    return result;
}

int main() {
    vector<string> a;
    cout << "Enter strings (press Enter after each):";
    string input;
    while(getline(cin, input)) {
        if(input.size() > 0) {
            a.push_back(input);
        }
    }

    vector<string> b = filter_by_prefix(a, "");
    
    bool same = issame(a, b);

    if(!same) cout << "Strings are not the same." << endl;
    else cout << "Strings are the same." << endl;
    
    return 0;
}