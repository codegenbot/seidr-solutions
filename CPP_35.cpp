#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

auto max_value(vector<int> l) {
    vector<float> v = vector<float>(l.begin(), l.end()); 
    return *std::max_element(v.begin(), v.end());
}