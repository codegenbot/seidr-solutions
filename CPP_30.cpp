```
#include <vector>
#include <algorithm>

bool issame(stdvector<float>& a, stdvector<float>& b) {
    if(a.size() != b.size()) 
        return false;
    for(int i = 0; i<a.size(); i++) {
        if(std::abs(a[i] - b[i]) > 0.001f)
            return false;
    }
    return true;
}

stdvector<float> get_positive(const stdvector<float>& l){
    stdvector<float> result;
    for(float x : l){
        if(x > 0)
            result.push_back(x);
    }
    return result;

}
int main() {
    stdvector<float> input = {1, -2, 3, -4};
    assert(issame(get_positive(input), {}));  
    return 0;
}