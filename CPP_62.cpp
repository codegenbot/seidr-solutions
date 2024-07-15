#include <vector> 

bool issame(vector<float> a, vector<float> b){
    // add your implementation here
}

vector<float> derivative(vector<float> xs){
    vector<float> result;
    for(int i = 1; i < xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

int main(){
    // Add test cases here
    assert (issame(derivative({1}), {}));
    
    return 0;
}