```cpp
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
}

int main() {
    int n;
    std::cin >> n;
    
    vector<string> a(n), b(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i] >> b[i];
    }
    
    bool same = issame(a, b);
    
    string prefix;
    cin >> prefix;
    
    vector<string> filtered = filter_by_prefix(a, prefix);
    
    if(same) {
        cout << "Same prefixes: ";
        for(string s : filtered)
            cout << s << " ";
        cout << endl;
    } else {
        cout << "Different prefixes: ";
        for(string s : filtered)
            cout << s << " ";
        cout << endl;
    }
    
    return 0;
}