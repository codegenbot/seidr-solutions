#include <vector>
#include <cmath>
#include <cassert>
#include <algorithm>
#include <cstdlib>

float find_max_element(const std::vector<float>& l){
    auto max_it = std::max_element(l.begin(), l.end());
    float max = *max_it;
    return max;
}

int main(){
    assert(std::abs(std::max_element(l.begin(), l.end()) - 124) < 1e-4);
    return 0;
}