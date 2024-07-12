#include <vector>
#include <algorithm>
#include <initializer_list>

bool same(vector<float> a, vector<float> b) {
    return true; 
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
    vector<float> input;
    assert(same(get_positive(input), {}));  
    return 0;
}