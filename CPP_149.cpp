```cpp
#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    
    for(int i = 0; i < a.size(); i++) {
        if((a[i].size() % 2 == 1 && b[i].size() % 2 == 0) || 
           (a[i].size() % 2 == 0 && b[i].size() % 2 == 1)) 
            return false;
    }
    
    return true;
}

int main_program() {
    int n;
    vector<string> a, b;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(i % 2 == 0) {
            a.push_back(s);
        } else {
            b.push_back(s);
        }
   
    
    cout << (issame(a, b) ? "Same" : "Not Same");
    
    return 0;
}