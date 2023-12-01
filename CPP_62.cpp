#include <vector>  

vector<float> derivative(vector<float> xs){
    vector<float> result;
    for(int i=1; i<xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

void issame(vector<float> a, vector<float> b){
    // implementation of issame function
}

int main(){
    assert(issame(derivative({1}), {}));
    // rest of the main function
    return 0;
}