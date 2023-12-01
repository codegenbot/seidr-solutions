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
    // Read input
    int n;
    cin >> n;
    vector<float> input(n);
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    // Process input (Not included in the given code)
    
    // Calculate derivative
    vector<float> result = derivative(input);
    
    // Print output
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}