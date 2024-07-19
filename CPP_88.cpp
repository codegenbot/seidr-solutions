#include <vector>

bool issame(vector<int> a, vector<int> b) {
    sort(b.begin(), b.end());
    
    return a == b;
}