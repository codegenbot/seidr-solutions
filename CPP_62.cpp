#include <vector>

using namespace std;

vector<float> derivative(vector<float> xs){
    vector<float> result;
    for(int i=1; i<xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

void issame(vector<float> a, vector<float> b){
    // Implementation of issame function
    // Add your implementation here
}

int main(){
    vector<float> xs = {1};
    vector<float> result = derivative(xs);
    vector<float> expected = {};

    issame(result, expected);

    return 0;
}