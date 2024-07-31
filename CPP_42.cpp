#include <vector>

bool issame(const vector<int>& a, const vector<int>& b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

void incr_list(vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        vec[i]++;
    }
}