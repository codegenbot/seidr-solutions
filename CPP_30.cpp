#include <vector>
#include <cassert>

bool issame(vector<float> a, vector<float> b){
    return a == b;
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
    assert (issame(get_positive({}) , {}));
    // ...
    return 0;
}