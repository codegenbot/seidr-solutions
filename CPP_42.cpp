#include <vector>

void incr_list(vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        vec[i]++;
    }
}

bool issame(const vector<int>& a, const vector<int>& b) {
    vector<int> a_incr = a;
    vector<int> b_incr = b;
    
    incr_list(a_incr);
    incr_list(b_incr);
    
    for (int i = 0; i < a_incr.size(); i++) {
        if (a_incr[i] != b_incr[i]) {
            return false;
        }
    }
    
    return true;
}