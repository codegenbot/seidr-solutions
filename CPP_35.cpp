#include <vector>
#include <algorithm>

float max_element(vector<int> l) {
    vector<float> v;
    for (int x : l) {
        v.push_back((float)x);
    }
    return *max_element(v.begin(), v.end());
}