#include <vector>

vector<float> get_positive(vector<float> l){
    vector<float> positive_nums;
    for(int i=0; i<l.size(); i++){
        if(l[i] > 0){
            positive_nums.push_back(l[i]);
        }
    }
    return positive_nums;
}

bool issame(vector<float> a,vector<float> b){
    // implementation goes here
}

int main(){
    assert(issame(get_positive({}) , {}));
    // add more assertions if needed
    return 0;
}