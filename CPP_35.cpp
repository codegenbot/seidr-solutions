#include <vector>
#include <algorithm>

float findMaxElement(vector<float> l){
    return *max_element(l.begin(), l.end());
}