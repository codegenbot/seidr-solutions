#include <vector>
#include <algorithm>

bool same(std::vector<float> a, std::vector<float> b) {
    if(a.size() != b.size()) 
        return false;
    for(int i = 0; i<a.size(); i++) {
        if(std::abs(a[i] - b[i]) > 0.001f)
            return false;
    }
    return true;
}

std::vector<float> getPositive(const std::vector<float>& l){
    std::vector<float> result;
    for(float x : l){
        if(x > 0.f)
            result.push_back(x);
    }
    return result;

}
int main() {
    std::vector<float> input = {1, -2, 3, -4};
    assert(same(getPositive(input), {}));  
    return 0;
}