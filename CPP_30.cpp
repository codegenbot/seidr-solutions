#include <vector>
#include <cassert>

vector<float> get_positive(vector<float> l){
    vector<float> positive_nums;
    for(auto num : l){
        if(num > 0){
            positive_nums.push_back(num);
        }
    }
    return positive_nums;
}

bool issame(vector<float> a, vector<float> b){
    return a == b;
}

int main(){
    assert(issame(get_positive(vector<float>{}), vector<float>{}));
    // Add more test cases here...
    return 0;
}