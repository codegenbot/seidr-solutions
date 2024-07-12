#include <vector>
#include <algorithm>
#include <initializer_list>

bool issame(vector<float> a, vector<float> b) = {
    if(a.size() != b.size()) 
        return false;
    for(int i = 0; i<a.size(); i++) {
        if(std::abs(a[i] - b[i]) > std::numeric_limits<float>::epsilon())
            return false;
    }
    return true;
};

vector<float> get_positive(vector<float> l);

int main() {
    vector<float> input = {1, -2, 3, -4};
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