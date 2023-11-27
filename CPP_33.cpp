#include <vector>
#include <algorithm>
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

vector<int> sort_third(vector<int> l) {
    vector<int> result;
    vector<int> sorted;
    
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            sorted.push_back(l[i]);
        } else {
            result.push_back(l[i]);
        }
    }
    
    sort(sorted.begin(), sorted.end());
    
    int j = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            result.push_back(sorted[j]);
            j++;
        }
    }
    
    return result;
}

int main() {
    assert(sort_third({5, 6, 3, 4, 8, 9, 2, 1}) == vector<int>({2, 6, 3, 4, 8, 9, 5, 1}));
    
    return 0;
}