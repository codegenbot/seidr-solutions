#include <vector>
#include <cassert>
#include <cmath>

using namespace std;

vector<float> derivative(vector<float> xs){
    vector<float> result;
    for(int i = 1; i < xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

int main(){
    // Test derivative function
    assert(issame(derivative({1}), {0}));
    
    return 0;
}