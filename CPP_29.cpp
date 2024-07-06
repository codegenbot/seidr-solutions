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
    
    vector<string>strings(n);
    
    for(int i = 0; i < n; ++i) {
        cin >> strings[i];
    }

    string prefix;
    cin >> prefix;

    vector<string>b = filter_by_prefix(strings, prefix);

    bool same = issame(b, strings);

    if(same)
        cout << "The lists are the same.\n";
    else
        cout << "The lists are not the same.\n";

    return 0;
}