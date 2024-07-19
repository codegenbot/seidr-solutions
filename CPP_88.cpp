#include <vector>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) return false;
    }
    
    return true;
}

vector<int> sort_array(vector<int> array){
    if(array.empty()) return array;
    
    int sum = array.front() + array.back();
    
    if(sum % 2 == 0){
        sort(array.rbegin(), array.rend());
    } else {
        sort(array.begin(), array.end());
    }
    
    return array;
}