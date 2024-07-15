#include <vector>
#include <cassert>

bool issame(const vector<float>& a, const vector<float>& b){
    return a == b;
}

vector<float> derivative(const vector<float>& xs){
    vector<float> result;
    for(int i = 1; i < xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

int main(){
    assert(issame(derivative({1}), {}));
}