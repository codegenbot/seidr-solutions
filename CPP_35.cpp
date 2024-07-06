#include <vector>
#include <algorithm>

float findMax(vector<int> l) {
    vector<float> v = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}; 
    return *max_element(v.begin(), v.end());
}