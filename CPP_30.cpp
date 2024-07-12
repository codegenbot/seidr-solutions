```cpp
#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    return a == b;
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float x : l){
        if(x > 0)
            result.push_back(x);
    }
    return result;
}

int main() {
    vector<float> input = {};
    vector<float> positives = get_positive(input);
    assert(issame(positives, {}));  
    return 0;
}