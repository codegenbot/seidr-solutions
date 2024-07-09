#include <vector>
#include <algorithm>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(find(b.begin(), b.end(), a[i]) == b.end()) {
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
    vector<string> a;
    vector<string> b;
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(i < n/2) 
            a.push_back(s);
        else
            b.push_back(s);
    }
    
    if(issame(a, b)) {
        vector<string> filtered = filter_by_prefix(a, "abc");
        for(string s : filtered)
            cout << s << endl;
    } else {
        cout << "Not the same" << endl;
    }
    
    return 0;
}