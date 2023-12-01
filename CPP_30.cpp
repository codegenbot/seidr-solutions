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

int main(){
    vector<float> nums = {1.5, -2.3, 4.7, -3.2, 6.9};
    vector<float> positive_nums = get_positive(nums);
    assert(positive_nums.size() == 3);
    assert(positive_nums[0] == 1.5);
    assert(positive_nums[1] == 4.7);
    assert(positive_nums[2] == 6.9);
    return 0;
}