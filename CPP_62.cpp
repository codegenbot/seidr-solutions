#include <vector>

vector<float> derivative(vector<float> xs);

vector<float> derivative(vector<float> xs){
    vector<float> derivative_xs;
    for(int i=1; i<xs.size(); i++){
        derivative_xs.push_back(xs[i] * i);
    }
    return derivative_xs;
}

int main() {
    // code for testing the derivative function
    return 0;
}