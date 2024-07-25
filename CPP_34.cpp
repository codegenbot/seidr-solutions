#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

sort(l.begin(), l.end());
l.erase(unique(l.begin(), l.end(), issame), l.end());
return l;