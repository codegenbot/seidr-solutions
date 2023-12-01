#include <vector>
#include <cmath>
#include <algorithm>

float find_max_element(const std::vector<float>& l){
    auto max_it = std::max_element(l.begin(), l.end());
    float max_val = *max_it;
    return max_val;
}

int main(){
    assert (std::abs(find_max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10})- 124)<1e-4);
    return 0;
}