#include <vector>
#include <cassert>

vector<float> get_positive(vector<float> l){
    vector<float> positive_nums;
    for(int i=0; i<l.size(); i++){
        if(l[i] > 0){
            positive_nums.push_back(l[i]);
        }
    }
    return positive_nums;
}

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

int main(){
    vector<float> l = {1.2, -3.4, 5.6, -7.8, 9.0};
    vector<float> positive_nums = get_positive(l);
    vector<float> expected = {1.2, 5.6, 9.0};
    assert(issame(positive_nums, expected));
    return 0;
}