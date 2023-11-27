#include <vector>

vector<float> derivative(vector<float> xs){
    vector<float> result;
    for(int i = 1; i < xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

bool isSame(vector<float> a, vector<float> b){
    // Implementation of isSame function
}

int main() {
    assert(isSame(derivative({1}), {}));
  
    return 0;
}