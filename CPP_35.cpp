#include <iostream>
#include <vector>
#include <algorithm>

float find_max_element(vector<float> l){
    return *max_element(l.begin(), l.end());
}