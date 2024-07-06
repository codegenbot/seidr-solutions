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

cout << (issame(v1, v2)? "Same" : "Not Same") << endl;