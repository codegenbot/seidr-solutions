#include <vector>
#include <cassert>

bool issame(vector<float> a, vector<float>b);

vector<float> derivative(vector<float> xs);

int main() {

    vector<float> derivative(vector<float> xs){
        vector<float> result;
        for(int i=1; i<xs.size(); i++){
            result.push_back(xs[i] * i);
        }
        return result;
    }

    return 0;
}

bool issame(vector<float> a, vector<float>b) {
    // implementation of issame function
}