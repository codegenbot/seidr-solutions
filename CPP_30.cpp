```
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    if(a.size() != b.size()) 
        return false;
    for(int i = 0; i<a.size(); i++) {
        if(std::abs(a[i] - b[i]) > 0.001f)
            return false;
    }
    return true;
}

std::vector<float> get_positive(const std::vector<float>& l){
    std::vector<float> result;
    for(float x : l){
        if(x > 0)
            result.push_back(x);
    }
    return result;

}
int main() {
    std::vector<float> input = {1, -2, 3, -4};
    assert(issame(get_positive(input), {}));  
    return 0;
}