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

bool is_same(vector<float> a, vector<float> b){
    return a == b;
}

int main() {
    assert(is_same(derivative({ 1 }), {}));
    
    return 0;
}