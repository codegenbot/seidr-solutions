```cpp
#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    vector<float> input({});
    get_positive(input); 
    assert(issame(get_positive(input), {}));  
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