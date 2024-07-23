#include <iostream>
#include <vector>
using namespace std;

// Function to get positive numbers from input vector
vector<float> get_positive(vector<float> l){
    vector<float> result;
    for (float x : l) {
        if (x > 0) {
            result.push_back(x);
        }
    }
    return result;
}

bool issame(vector<vector<float>> a, vector<vector<float>> b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++) {
        if(a[i].size() != b[i].size()) return false;
        for(float x: a[i]) {
            if(std::find(b[i].begin(),b[i].end(),x) == b[i].end()) return false;
        }
    }
    return true;
}

int main() {
    assert(issame(get_positive({}), {}));
    return 0;
}