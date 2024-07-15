#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<float> a, vector<float> b){
    return a == b;
}

vector<float> derivative(vector<float> xs){
    vector<float> result;
    for(size_t i=1; i<xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

int main(){
    assert(issame(derivative({1.0f}), {}));  
    return 0;
}