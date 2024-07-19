#include <vector>

bool issame(float a, float b);

vector<float> derivative(vector<float> xs){
    vector<float> result;
    for(int i=1; i<xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

bool issame(float a, float b) {
    return a == b;
}

int main() {
    // Main function logic here
    return 0;
}