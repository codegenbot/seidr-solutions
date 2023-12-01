#include <vector>

vector<float> get_positive(vector<float> l){
    vector<float> positive;
    for(int i=0; i<l.size(); i++){
        if(l[i] > 0){
            positive.push_back(l[i]);
        }
    }
    return positive;
}

bool issame(vector<float> a, vector<float> b){
    // function implementation
}

int main(){
    assert(issame(get_positive({}), {}));
    // more test cases
    return 0;
}