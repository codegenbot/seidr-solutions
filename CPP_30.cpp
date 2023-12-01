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
    // implementation of issame function
}

int main(){
    assert (issame(get_positive({}) , {}));
    
    // more test cases
    
    return 0;
}