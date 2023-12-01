#include <vector>
#include <cmath>
#include <cassert>
#include <algorithm>

float find_max_element(const vector<float>& l){
    auto max_it = max_element(l.begin(), l.end());
    float max = *max_it;
    return max;
}

int main(){
    assert (abs(find_max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10})- 124)<1e-4);
    return 0;
}