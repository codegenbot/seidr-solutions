#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i].size() % 2 == 1 && b[i].size() % 2 == 0 || 
           a[i].size() % 2 == 0 && b[i].size() % 2 == 1) 
            return false;
    }
    
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<string> v1, v2;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        v1.push_back(s);
    }

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        v2.push_back(s);
    }

    if(issame(v1, v2)) 
        cout << "Same" << endl;
    else
        cout << "Not Same" << endl;