#include <vector>
#include <cassert>

bool issame(vector<float> a, vector<float> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<float> get_positive(vector<float> l){
    vector<float> positive_nums;
    for(int i=0; i<l.size(); i++){
        if(l[i] > 0){
            positive_nums.push_back(l[i]);
        }
    }
    return positive_nums;
}

int main() {
    vector<float> l = {1.5, -2.0, 3.7, -4.2, 5.9};
    vector<float> positive_nums = get_positive(l);
    
    assert(issame(positive_nums, {1.5, 3.7, 5.9}));
    
    return 0;
}