```
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
    vector<string> a, b;
    
    cout << "Enter the number of strings: ";
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        string s;
        cout << "Enter string " << i+1 << ": ";
        cin >> s;
        if(i < n/2) 
            a.push_back(s);
        else
            b.push_back(s);
    }
    
    bool result = issame(a, b);
    
    if(result)
        cout << "The lists are same.\n";
    else
        cout << "The lists are not same.\n";
    
    return 0;
}