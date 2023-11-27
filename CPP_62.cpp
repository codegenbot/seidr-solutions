#include <vector>
#include <cassert>

vector<float> derivative(vector<float> xs){
    vector<float> result;
    for(int i=1; i<xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
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
    assert(issame(derivative({1}), {}));
    assert(issame(derivative({1,2,3,4}), {2,4,6}));
    assert(issame(derivative({5,10,15,20}), {10,20,30}));
    return 0;
}