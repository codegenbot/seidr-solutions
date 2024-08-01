#include <vector>
#include <cassert>

bool issame(vector<float> a, vector<vector<float>> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        vector<float> vec1 = get_positive(a[i]);
        vector<float> vec2 = get_positive(b[i]);
        if(vec1.size() != vec2.size()) {
            return false;
        }
        for(float x : vec1) {
            if(std::find(vec2.begin(), vec2.end(), x) == vec2.end()) {
                return false;
            }
        }
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