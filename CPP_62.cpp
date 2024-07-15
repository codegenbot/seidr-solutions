#include <vector>
#include <cassert>

bool issame(vector<float> a, vector<float> b){
    return a == b;
}

vector<float> derivative(vector<float> xs);

int main(){
    assert(issame(derivative({1}), {}));
    return 0;
}