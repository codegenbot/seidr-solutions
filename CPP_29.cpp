#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
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
    vector<string> input_strings(n);
    for(int i = 0; i < n; i++) {
        cin >> input_strings[i];
    }

    string prefix;
    cin >> prefix;

    if(issame(filter_by_prefix(input_strings, prefix), filter_by_prefix(vector<string>(), prefix))) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}