#include <vector>
#include <cassert>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return a == b;
}

std::vector<float> rescale_to_unit(const std::vector<float>& v){
    float max_val = *std::max_element(v.begin(), v.end());
    std::vector<float> rescaled(v.size());
    std::transform(v.begin(), v.end(), rescaled.begin(), [max_val](float val) { return val / max_val; });
    return rescaled;
}

int main(){
    assert(issame(rescale_to_unit({12.0, 11.0, 15.0, 13.0, 14.0}), {0.25, 0.0, 1.0, 0.5, 0.75}));
    
    return 0;
}