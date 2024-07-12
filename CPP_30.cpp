#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

int main() {
    vector<float> input = {1.0f, -2.0f, 3.0f, -4.0f};
    assert(issame(get_positive(input), {3.0f}));  
    return 0;
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float x : l){
        if(x > 0)
            result.push_back(x);
    }
    return result;
}