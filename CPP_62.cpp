#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<float> derivative(vector<float> xs){
    vector<float> result;
    for(int i=1; i<xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

bool isSame(vector<float> a, vector<float> b){
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
    assert(isSame(derivative({1}), {}));
    assert(isSame(derivative({2,3,4}), {2,6,12}));
    
    return 0;
}