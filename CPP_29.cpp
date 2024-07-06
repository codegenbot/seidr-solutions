#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;

int main() {
    int n;
    cin >> n;
    
    vector<string> strings;
    
    for(int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        strings.push_back(s);
    }
    
    string prefix;
    cin >> prefix;
    
    vector<string> filteredStrings = filter_by_prefix(strings, prefix);
    
    if(issame(filteredStrings, strings)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}