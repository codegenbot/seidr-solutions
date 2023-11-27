#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<float> derivative(vector<float> xs){
    vector<float> derivative_xs;
    for(int i=1; i<xs.size(); i++){
        derivative_xs.push_back(xs[i] * i);
    }
    return derivative_xs;
}

int main(){
    vector<float> xs = {1.5, 2.5, 3.5};
    vector<float> result = derivative(xs);
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}