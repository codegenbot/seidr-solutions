#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

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
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<float> input; // Replace with actual input
    vector<float> result = derivative(input);
    
    // Print output (Not included in the given code)
    
    return 0;
}