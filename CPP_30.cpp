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
    vector<float> nums = {-1.5, 2.0, -3.5, 4.5, -5.0, 6.0};
    vector<float> positive_nums = get_positive(nums);

    assert(positive_nums.size() == 3);
    assert(positive_nums[0] == 2.0);
    assert(positive_nums[1] == 4.5);
    assert(positive_nums[2] == 6.0);

    vector<float> empty_nums;
    vector<float> empty_positive_nums = get_positive(empty_nums);

    assert(empty_positive_nums.size() == 0);

    return 0;
}