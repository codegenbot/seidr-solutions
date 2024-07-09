#include <iostream>
#include <string>
#include <vector>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    vector<string> prefixes = all_prefixes("WWW");
    for (string prefix : prefixes) {
        cout << prefix << endl;
    }
    
    vector<string> same_prefixes = {"W", "WW"};
    bool is_same = issame(all_prefixes("WWW"), same_prefixes);
    
    if (is_same) {
        cout << "The two sets of strings are the same." << endl;
    } else {
        cout << "The two sets of strings are not the same." << endl;
    }
    
    return 0;
}

vector<string> all_prefixes(string str) {
    vector<string> prefixes;
    for (int i = 1; i <= str.length(); i++) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}