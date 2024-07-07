#include <vector>
#include <algorithm>
#include <cmath>

float my_max_element(vector<float> l){
    return *max_element(l.begin(), l.end());
}