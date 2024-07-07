#include <vector>
#include <algorithm>
#include <cmath>

float my_max_element(vector<float> l){
    return *max_element(l.begin(), l.end());
}

int main() {
    assert(abs(my_max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10})- 124)<1e-4);
}