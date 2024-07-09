#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

using namespace std;

bool sameVectors(vector<float>& a, vector<float>& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

float find_closest_elements(vector<float> vec) {
    float min_diff = numeric_limits<float>::max();
    for(int i=1; i<vec.size(); i++){
        if(abs(vec[i] - vec[i-1]) < min_diff)
            min_diff = abs(vec[i] - vec[i-1]);
    }
    return min_diff;
}

float find_closest_elements(vector<float> vec) {
    float min_diff = numeric_limits<float>::max();
    for(int i=1; i<vec.size(); i++){
        if(abs(vec[i] - vec[i-1]) < min_diff)
            min_diff = abs(vec[i] - vec[i-1]);
    }
    return min_diff;
}