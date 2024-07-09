```cpp
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
    
    int n1,n2; 
    cin >> n1;
    cin >> n2;
    
    for(int i = 0; i < n1; i++) {
        string s;
        cin >> s;
        a.push_back(s);
    }
    for(int i = 0; i < n2; i++) {
        string s;
        cin >> s;
        b.push_back(s);
    }
    
    if(issame(a,b)) {
        cout << "Yes\n";
    } else {
        vector<string> result = filter_by_prefix(a, "abc");
        for(string str : result) {
            cout << str << "\n";
        }
    }
    return 0;
}