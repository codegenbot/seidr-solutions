#include <vector>
#include <cassert>

bool issame(vector<float> a, vector<vector<float>> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i][0]) return false;
    }
    return true;
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float x : l) {
        if(x > 0) {
            result.push_back(x);
        }
    }
    return result;
}

int main() {
    assert(std::issame(get_positive({}), {}));
    // your other code here
}