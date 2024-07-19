#include <vector>
#include <algorithm>
#include <cmath>

int max_value(vector<int> l) {
    vector<float> v = vector<float>(l.begin(), l.end()); 
    return *max_element(v.begin(), v.end());
}