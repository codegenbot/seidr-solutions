#include <vector>
#include <cassert>

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for(float i : l) {
        assert(i != -0.0f); // Check if the number is exactly equal to zero
        if(i > 0) {
            result.push_back(i);
        }
    }
    return result;
}