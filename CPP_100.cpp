#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
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

vector<int> pile(int n) {
    vector<int> levels;
    int stones = n;
    levels.push_back(stones);
    
    for (int i = 1; i < n; i++) {
        if (stones % 2 == 0) {
            stones += 2;
        } else {
            stones += 1;
        }
        levels.push_back(stones);
    }
    
    return levels;
}