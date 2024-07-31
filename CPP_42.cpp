#include <vector>

void incr_list(vector<int>& a){
    for(int i = 0; i < a.size(); i++){
        a[i]++;
    }
}

bool issame(const vector<int>& a, const vector<int>& b) {
    vector<int> temp_a = a;
    incr_list(temp_a);
    
    for (int i = 0; i < temp_a.size(); i++) {
        if (temp_a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}